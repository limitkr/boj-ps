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

int N, Q;
ll res;
vt<ll> v;
unordered_map<int, bool> m;

void solve() {
  cout << res << endl;
  int i;
  ll x;
  while (Q--) {
    int op;
    cin >> op;
    switch (op) {
    case 1: {
      cin >> i >> x;
      ll temp = v[i - 1] - x;
      v[i - 1] = x;
      if (!m[i]) res -= temp;
      break;
    }
    case 2: {
      cin >> i;
      if (m[i]) m[i] = false;
      else m[i] = true;
      m[i] ? res -= v[i - 1] : res += v[i - 1];
      break;
    }
    }
    cout << res << endl;
  }
}

auto main() -> int32_t {
  FAST_IO;
  cin >> N;
  v.resize(N);
  for (int i = 0; i < N; i++) {
    cin >> v[i];
    res += v[i];
  }
  cin >> Q;
  solve();
  return 0;
}
