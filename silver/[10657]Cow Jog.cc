/**
 * @file Cow_Jog.cpp
 * @author limitkr
 * @version 0.1
 * @date 2024-08-20 12:13:09
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
  vt<pair<int, int>> v(N);
  for (int i = 0; i < N; i++) {
    int pos, speed;
    cin >> pos >> speed;
    v[i].first = pos, v[i].second = speed;
  }
  int cnt = 0, temp = v[N - 1].second;
  for (int i = N - 2; i >= 0; i--) {
    if (v[i].second <= temp)
      cnt++;
    temp = min(temp, v[i].second);
  }
  cout << cnt + 1;
  return 0;
}