/**
 * 14756.cpp
 * @author limitkr
 * @date 25. 3. 23 09:11:14
 */
#pragma GCC optimize("O3,unroll-loops")
#include <bits/extc++.h>
using namespace std;

#define FAST_IO cin.tie(nullptr)->sync_with_stdio(false)

using ll = long long;

template <int N, typename T>
struct Vec : vector<Vec<N - 1, T>> {
  template <typename... Args>
  explicit Vec(int n = 0, Args... args)
      : vector<Vec<N - 1, T>>(n, Vec<N - 1, T>(args...)) {}
};
template <typename T>
struct Vec<1, T> : vector<T> {
  explicit Vec(int n = 0, const T &val = T()) : vector<T>(n, val) {}
};

// FFT
namespace FFT {
struct cmpl {
  double x, y;
  cmpl() { x = y = 0; }
  cmpl(double x, double y) : x(x), y(y) {}
  cmpl conjugated() const { return {x, -y}; }
};
inline cmpl operator+(cmpl a, cmpl b) { return {a.x + b.x, a.y + b.y}; }
inline cmpl operator-(cmpl a, cmpl b) { return {a.x - b.x, a.y - b.y}; }
inline cmpl operator*(cmpl a, cmpl b) {
  return {a.x * b.x - a.y * b.y, a.x * b.y + a.y * b.x};
}

int base = 1;
vector<cmpl> roots = {{0, 0}, {1, 0}};
vector<int> rev = {0, 1};
const double PI = static_cast<double>(acosl(-1.0));

void ensure_base(const int nbase) {
  if (nbase <= base) return;

  rev.resize(1 << nbase);
  for (int i = 1; i < 1 << nbase; i++)
    rev[i] = (rev[i >> 1] >> 1) + ((i & 1) << (nbase - 1));

  roots.resize(1 << nbase);
  while (base < nbase) {
    const double angle = 2 * PI / (1 << (base + 1));
    for (int i = 1 << (base - 1); i < 1 << base; i++) {
      roots[i << 1] = roots[i];
      const double angle_i = angle * (2 * i + 1 - (1 << base));
      roots[(i << 1) + 1] = cmpl(cos(angle_i), sin(angle_i));
    }
    base++;
  }
}

void fft(vector<cmpl> &a, int n = -1) {
  if (n == -1) n = static_cast<int>(a.size());

  assert((n & (n - 1)) == 0);
  const int zeros = __builtin_ctz(n);
  ensure_base(zeros);
  const int shift = base - zeros;
  for (int i = 0; i < n; i++) {
    if (i < (rev[i] >> shift)) ranges::swap(a[i], a[rev[i] >> shift]);
  }
  for (int k = 1; k < n; k <<= 1) {
    for (int i = 0; i < n; i += 2 * k) {
      for (int j = 0; j < k; j++) {
        const cmpl z = a[i + j + k] * roots[j + k];
        a[i + j + k] = a[i + j] - z;
        a[i + j] = a[i + j] + z;
      }
    }
  }
}

vector<cmpl> fa, fb;

// interface
vector<ll> multiply(const vector<int> &a, const vector<int> &b) {
  if (a.empty() || b.empty()) return {};
  const int need = static_cast<int>(a.size() + b.size() - 1);
  int nbase = 1;
  while ((1 << nbase) < need) nbase++;
  ensure_base(nbase);
  const int sz = 1 << nbase;
  if (sz > static_cast<int>(fa.size())) fa.resize(sz);

  for (int i = 0; i < sz; i++) {
    const int x = i < static_cast<int>(a.size()) ? a[i] : 0;
    const int y = i < static_cast<int>(b.size()) ? b[i] : 0;
    fa[i] = cmpl(x, y);
  }
  fft(fa, sz);
  const cmpl r(0, -0.25 / (sz >> 1));
  for (int i = 0; i <= sz >> 1; i++) {
    int j = (sz - i) & (sz - 1);
    cmpl z = (fa[j] * fa[j] - (fa[i] * fa[i]).conjugated()) * r;
    fa[j] = (fa[i] * fa[i] - (fa[j] * fa[j]).conjugated()) * r;
    fa[i] = z;
  }
  for (int i = 0; i < sz >> 1; i++) {
    const cmpl A0 = (fa[i] + fa[i + (sz >> 1)]) * cmpl(0.5, 0);
    const cmpl A1 =
        (fa[i] - fa[i + (sz >> 1)]) * cmpl(0.5, 0) * roots[(sz >> 1) + i];
    fa[i] = A0 + A1 * cmpl(0, 1);
  }
  fft(fa, sz >> 1);
  vector<ll> res(need);
  for (int i = 0; i < need; i++)
    res[i] = llround(i % 2 == 0 ? fa[i >> 1].x : fa[i >> 1].y);

  return res;
}
}  // namespace FFT

auto main() -> int32_t {
  FAST_IO;
  int n, l, m;
  ll W;
  cin >> n >> l >> m >> W;

  Vec<2, int> T(m, n, 0), P(m, l, 0);
  for (auto &i : T) {
    for (auto &j : i) cin >> j;
  }
  for (auto &i : P) {
    for (auto &j : i) cin >> j;
  }

  vector<ll> res(n - l + 1, 0);
  for (int i = 0; i < m; i++) {
    auto &a = T[i];
    auto &b = P[i];
    ranges::reverse(b);
    auto tmp = FFT::multiply(a, b);
    for (int j = l - 1; j < n; j++) {
      res[j - (l - 1)] += tmp[j];
    }
  }

  int ans = 0;
  for (const auto r : res) {
    if (r > W) ans++;
  }

  cout << ans;
  return 0;
}