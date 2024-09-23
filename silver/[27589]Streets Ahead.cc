/**
 * @file Streets_Ahead.cpp
 * @author limitkr
 * @version 0.1
 * @date 2024-08-06 12:44:02
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

int n, q;

void solve() {
  unordered_map<string, int> m;
  int cnt = 0;
  while (n--) {
    string x;
    cin >> x;
    m[x] = cnt;
    cnt++;
  }

  while (q--) {
    string a, b;
    cin >> a >> b;
    cout << abs(m[a] - m[b]) - 1 << endl;
  }
}

auto main() -> int32_t {
  FAST_IO;
  cin >> n >> q;
  solve();
  return 0;
}