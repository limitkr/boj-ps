/**
 * @file Harmoonia.cpp
 * @author limitkr
 * @version 0.1
 * @date 2024-08-13 16:17:55
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

auto main() -> int32_t {
  FAST_IO;
  cin >> N;
  bool flag = false, find = false;
  int cnt = 0;
  int tmpA, tmpB;
  while (N--) {
    int a, b;
    cin >> a >> b;
    if ((a - b) % 12 != 7)
      flag = false;
    else if (flag && (tmpA != a && tmpB != b)) {
      find = true;
      cout << cnt << endl;
    }
    if ((a - b) % 12 == 7)
      flag = true;
    cnt++;
    tmpA = a, tmpB = b;
  }
  if (!find)
    cout << "POLE";
  return 0;
}