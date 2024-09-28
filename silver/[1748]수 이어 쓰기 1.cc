/**
 * @file 수_이어_쓰기_1.cpp
 * @author limitkr
 * @version 0.1
 * @date 2024-09-09 12:27:36
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

int N, p, res = 0, len = 1;

auto main() -> int32_t {
  FAST_IO;
  cin >> N;
  for (int i = 1; N / i; i *= 10) {
    res += i * 9 * len;
    len++;
    p = i;
  }
  p *= 10;
  res -= (p - N - 1) * (len - 1);
  cout << res;
  return 0;
}
