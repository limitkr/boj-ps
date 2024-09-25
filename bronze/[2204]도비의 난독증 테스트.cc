/**
 * @file [B1]도비의_난독증_테스트.cpp
 * @author limitkr
 * @version 0.1
 * @date 2024-09-25 01:56:01
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
vt<string> v;

auto main() -> int32_t {
  FAST_IO;
  while (cin >> N) {
    if (!N)
      break;
    v.resize(N);
    for (auto &s : v)
      cin >> s;
    ranges::sort(v, [&](const string &a, const string &b) {
      string _a = a, _b = b;
      ranges::transform(_a, _a.begin(), ::tolower);
      ranges::transform(_b, _b.begin(), ::tolower);
      return _a < _b;
    });
    cout << v[0] << endl;
  }
  return 0;
}