/**
 * @file Banks.cpp
 * @author limitkr
 * @version 0.2
 * @date 2024-08-08 14:17:54
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

int N;
vt<int> v, dp;

auto main() -> int32_t {
  FAST_IO;
  cin >> N;
  v.resize(N);
  dp.resize(N + 1, 0);
  for (int i = 0; i < N; i++) {
    cin >> v[i];
    dp[i + 1] = dp[i] + v[i];
  }

  ll res = 0;
  for (int i = 0; i < N - 1; i++) {
    for (int j = 0; j < N; j++) {
      int idx = (i + j + 1) % N;
      int temp = dp[idx] + (i + j + 1 > N - 1 ? dp[N] : 0);
      if (temp < dp[j]) {
        res += ceil(abs(temp - dp[j]) / static_cast<double>(dp[N]));
      }
    }
  }
  cout << res;
  return 0;
}
