/**
 * @file 무한_문자열.cpp
 * @author limitkr
 * @version 0.1
 * @date 2024-08-26 15:25:19
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

string s, t;

auto main() -> int32_t {
  FAST_IO;
  cin >> s >> t;
  string temp1, temp2;
  for (int i = 0; i < t.length(); i++)
    temp1 += s;
  for (int i = 0; i < s.length(); i++)
    temp2 += t;
  cout << (temp1 == temp2 ? 1 : 0);
  return 0;
}