/**
 * @file 삼각형.cpp
 * @author limitkr
 * @version 0.1
 * @date 2024-08-06 00:16:05
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

double W, H;

void solve() {}

auto main() -> int32_t {
  FAST_IO;
  cin >> W >> H;
  cout << fixed;
  cout.precision(1);
  cout << W * H / 2 << endl;
  return 0;
}