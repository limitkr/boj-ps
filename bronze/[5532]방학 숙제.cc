/**
 * @file [B4]방학_숙제.cpp
 * @author limitkr
 * @version 0.1
 * @date 2024-09-21 09:50:20
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

int L, A, B, C, D;

auto main() -> int32_t {
  FAST_IO;
  cin >> L >> A >> B >> C >> D;
  while (!(A <= 0 && B <= 0)) {
    A -= C;
    B -= D;
    L--;
  }
  cout << L;
  return 0;
}