#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#include <bits/extc++.h>

using namespace __gnu_pbds;
using namespace std;

using ll = long long;
using ld = long double;

#define FAST_IO cin.tie(nullptr)->sync_with_stdio(false)
#define endl '\n'
#define vt vector

typedef tuple<int, int> Quiz;
int N, L, K;
vt<Quiz> v;

static bool cmp(const Quiz &A, const Quiz &B) {
  auto [Asub1, Asub2] = A;
  auto [Bsub1, Bsub2] = B;
  if (Asub2 == Bsub2) return Asub1 < Bsub1;
  if (Asub2 > L && Bsub2 > L) return Asub1 < Bsub1;
  return Asub2 < Bsub2;
}

void solve() {
  int i = 0, res = 0;
  while (K--) {
    int s1, s2;
    tie(s1, s2) = v[i];
    if (s2 <= L) res += 140;
    else if (s1 <= L) res += 100;
    i++;
  }
  cout << res;
}

auto main() -> int32_t {
  FAST_IO;
  cin >> N >> L >> K;
  while (N--) {
    int s1, s2;
    cin >> s1 >> s2;
    v.emplace_back(s1, s2);
  }
  ranges::sort(v, cmp);
  solve();
  return 0;
}
