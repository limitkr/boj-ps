/**
 * @file Absolutely.cpp
 * @author limitkr
 * @version 0.1
 * @date 2024-08-16 11:35:06
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

int T;
double a, b;

void solve() {
  cin >> a >> b;
  cout << fixed;
  cout.precision(1);
  cout << abs(b - a) << endl;
}

auto main() -> int32_t {
  FAST_IO;
  cin >> T;
  while (T--)
    solve();
  return 0;
}