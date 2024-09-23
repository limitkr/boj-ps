#include <bits/stdc++.h>
using namespace std;

#define FAST_IO cin.tie(nullptr)->sync_with_stdio(false)
#define endl '\n'
#define MAX 1000

int N, dp[MAX];

void solve() {
  dp[0] = 0;
  dp[1] = 1;
  dp[2] = 2;
  for (int i = 3; i <= N; i++) {
    dp[i] = min(dp[i - 1] + 1, dp[i - 3] + 1);
  }
  if (dp[N] & 1) cout << "SK";
  else cout << "CY";
}

int32_t main() {
  FAST_IO;
  cin >> N;
  solve();
  return 0;
}
