/**
 * @file 재수강.cpp
 * @author limitkr
 * @version 0.1
 * @date 2024-09-04 11:14:58
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

string target;
int N;
auto main() -> int32_t {
  FAST_IO;
  cin >> target >> N;
  int cnt = 0;
  while (N--) {
    string x;
    cin >> x;
    bool flag = true;
    for (int i = 0; i < 5; i++) {
      if (x[i] != target[i]) {
        flag = false;
        break;
      }
    }
    if (flag)
      cnt++;
  }
  cout << cnt;
  return 0;
}