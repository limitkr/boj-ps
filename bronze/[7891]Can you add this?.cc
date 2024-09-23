/**
 * @file [B5]Can_you_add_this?.cpp
 * @author limitkr
 * @version 0.1
 * @date 2024-09-23 08:43:09
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

int T;

auto main() -> int32_t {
  FAST_IO;
  cin >> T;
  while (T--) {
    int a, b;
    cin >> a >> b;
    cout << a + b << endl;
  }
  return 0;
}