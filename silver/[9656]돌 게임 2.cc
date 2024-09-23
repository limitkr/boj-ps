/**
 * @file 돌_게임_2.cpp
 * @author limitkr
 * @version 0.1
 * @date 2024-09-09 10:11:05
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

int N;

auto main() -> int32_t {
  FAST_IO;
  cin >> N;
  cout << (N & 0x1 ? "CY" : "SK");
  return 0;
}