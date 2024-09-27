/**
 * @file Total_Circle.cpp
 * @author limitkr
 * @version 0.1
 * @date 2024-08-18 13:40:50
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

int N, M, x, y;
vt<pair<ll, ll>> P, Q;

template <typename T> static constexpr T _pow(T x, unsigned p) {
  T res = 1;
  while (p) {
    if (p & 0x1)
      res *= x;
    x *= x;
    p >>= 1;
  }
  return res;
}

auto main() -> int32_t {
  FAST_IO;
  cin >> N >> M;
  P.resize(N), Q.resize(M);
  for (int i = 0; i < N; i++) {
    cin >> x >> y;
    P[i].first = x, P[i].second = y;
  }
  for (int i = 0; i < M; i++) {
    cin >> x >> y;
    Q[i].first = x, Q[i].second = y;
  }
  ll res = 0;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++)
      res = max(res, _pow(P[i].first - Q[j].first, 2) +
                         _pow(P[i].second - Q[j].second, 2));
  }
  cout << res;
  return 0;
}