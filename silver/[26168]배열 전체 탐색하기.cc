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

int N, M;
vt<ll> v;

auto lb(ll k) { return ranges::lower_bound(v, k); }
auto ub(ll k) { return ranges::upper_bound(v, k); }

auto q1(ll k) {
  auto it = lb(k);
  return distance(it, v.end());
}

auto q2(ll k) {
  auto it = ub(k);
  return distance(it, v.end());
}

auto q3(ll i, ll j) {
  auto l = lb(i), r = ub(j);
  return distance(l, r);
}

void solve() {
  char op;
  ll k, i, j;
  while (M--) {
    char op;
    cin >> op;
    switch (op) {
    case '1':
      cin >> k;
      cout << q1(k) << endl;
      break;
    case '2':
      cin >> k;
      cout << q2(k) << endl;
      break;
    case '3':
      cin >> i >> j;
      cout << q3(i, j) << endl;
      break;
    }
  }
}

auto main() -> int32_t {
  FAST_IO;
  cin >> N >> M;
  v.resize(N);
  for (int i = 0; i < N; i++) cin >> v[i];
  ranges::sort(v);
  solve();
  return 0;
}
