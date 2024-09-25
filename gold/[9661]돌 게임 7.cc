/**
 * @file [G2]돌_게임_7.cpp
 * @author limitkr
 * @version 0.1
 * @date 2024-09-24 10:35:09
 */
#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ld = long double;

#define FAST_IO cin.tie(nullptr)->sync_with_stdio(false)
#define endl '\n'
#define vt vector
#define ar array

ll x;

auto main() -> int32_t {
  FAST_IO;
  cin >> x;
  cout << ((x % 5 == 0 || x % 5 == 2) ? "CY" : "SK");
  return 0;
}
