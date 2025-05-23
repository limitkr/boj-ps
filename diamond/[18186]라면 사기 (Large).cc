/**
 * @file 라면_사기_(Large).cpp
 * @author limitkr
 * @version 0.2
 * @date 2024-09-07 09:24:19
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

int N, B, C;

auto main() -> int32_t {
  FAST_IO;
  cin >> N >> B >> C;
  vt f(3, vt<ll>(N));
  for (int i = 0; i < N; i++)
    cin >> f[0][i];

  auto solve = [&](const int i) {
    f[1][i] = ranges::min(f[0][i], f[0][i - 1]);
    f[0][i] -= f[1][i];
    f[0][i - 1] -= f[1][i];

    f[2][i] = ranges::min(f[0][i], f[1][i - 1]);
    f[0][i] -= f[2][i];
    f[1][i - 1] -= f[2][i];
  };
  if (B > C)
    for (int i = 1; i < N; i++) {
      solve(i);
    }

  ll res = 0;
  for (int i = 0; i < N; i++) {
    res += f[0][i] * B + f[1][i] * (B + C) + f[2][i] * (B + 2 * C);
  }
  cout << res;
  return 0;
}