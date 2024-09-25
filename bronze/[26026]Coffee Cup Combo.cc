/**
 * @file Coffee_Cup_Combo.cpp
 * @author limitkr
 * @version 0.1
 * @date 2024-08-13 11:24:31
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

int N;
string S;

void solve() {}

auto main() -> int32_t {
  FAST_IO;
  cin >> N >> S;
  int res = 0, amt = 0;
  for (auto ch : S) {
    if (ch == '1') {
      res++;
      amt = 2;
    } else {
      if (amt > 0)
        res++;
      amt--;
    }
  }
  cout << res;
  return 0;
}