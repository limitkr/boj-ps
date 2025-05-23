/**
 * @file 골드바흐_파티션_2.cpp
 * @author limitkr
 * @version 0.1
 * @date 2024-08-13 14:32:28
 */
#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#include <bits/extc++.h>
#include <bits/stdc++.h>

using namespace __gnu_pbds;
using namespace std;

using ll = long long;
using ld = long double;

#define FAST_IO cin.tie(nullptr)->sync_with_stdio(false)
#define endl '\n'
#define vt vector
#define ar array

#define MAX 1'000'000

// No Pre-Generate Version
// https://cp-algorithms.com/algebra/sieve-of-eratosthenes.html
vt<char> seg_sieve(ll L, ll R) {
  vt<char> isPrime(R - L + 1, true);
  ll lim = sqrt(R);
  for (ll i = 2; i <= lim; i++) {
    for (ll j = max(i * i, (L + i - 1) / i * i); j <= R; j += i)
      isPrime[j - L] = false;
  }
  if (L == 1)
    isPrime[0] = false;
  return isPrime;
}

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
vt<cmpl> roots = {{0, 0}, {1, 0}};
vt<int> rev = {0, 1};
const double PI = static_cast<double>(acosl(-1.0));

void ensure_base(const int nbase) {
  if (nbase <= base) {
    return;
  }
  rev.resize(1 << nbase);
  for (int i = 1; i < 1 << nbase; i++) {
    rev[i] = (rev[i >> 1] >> 1) + ((i & 1) << (nbase - 1));
  }
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

void fft(vt<cmpl> &a, int n = -1) {
  if (n == -1) {
    n = static_cast<int>(a.size());
  }
  assert((n & (n - 1)) == 0);
  const int zeros = __builtin_ctz(n);
  ensure_base(zeros);
  const int shift = base - zeros;
  for (int i = 0; i < n; i++) {
    if (i < (rev[i] >> shift)) {
      ranges::swap(a[i], a[rev[i] >> shift]);
    }
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

vt<cmpl> fa, fb;

// interface
vt<ll> multiply(const vt<int> &a, const vt<int> &b) {
  if (a.empty() || b.empty()) {
    return {};
  }
  const int need = static_cast<int>(a.size() + b.size() - 1);
  int nbase = 1;
  while ((1 << nbase) < need)
    nbase++;
  ensure_base(nbase);
  const int sz = 1 << nbase;
  if (sz > static_cast<int>(fa.size())) {
    fa.resize(sz);
  }
  for (int i = 0; i < sz; i++) {
    const int x = i < static_cast<int>(a.size()) ? a[i] : 0;
    const int y = i < static_cast<int>(b.size()) ? b[i] : 0;
    fa[i] = cmpl(x, y);
  }
  fft(fa, sz);
  const cmpl r(0, -0.25 / (sz >> 1));
  for (int i = 0; i <= sz >> 1; i++) {
    int j = (sz - i) & sz - 1;
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
  vt<ll> res(need);
  for (int i = 0; i < need; i++) {
    res[i] = llround(i % 2 == 0 ? fa[i >> 1].x : fa[i >> 1].y);
  }
  return res;
}
} // namespace FFT

auto main() -> int32_t {
  FAST_IO;
  int T;
  cin >> T;
  auto prime = seg_sieve(0, MAX);
  vt<int> a(MAX);
  for (int i = 2; i <= MAX; i++) {
    if (prime[i])
      a[i] = 1;
  }
  auto res = FFT::multiply(a, a);
  while (T--) {
    int x;
    cin >> x;
    if (x == 4)
      cout << 1;
    else {
      auto temp = round(res[x]);
      cout << ceil(temp / 2);
    }
    cout << endl;
  }
  return 0;
}