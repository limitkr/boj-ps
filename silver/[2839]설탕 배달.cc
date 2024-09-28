#include <bits/stdc++.h>
using namespace std;

#define ll long long

int N;
map<int, ll> dp;

ll solve(int n) {
  if (dp.contains(n)) return dp[n];
  if (n % 5 == 0) {
    dp[n] = solve(n - 5) + 1;
  } else if (n % 3 == 0) {
    dp[n] = solve(n - 3) + 1;
  } else if (solve(n - 5) > 0 && solve(n - 3) > 0) {
    dp[n] = min(solve(n - 5) + 1, solve(n - 3) + 1);
  } else {
    dp[n] = -1;
  }

  return dp[n];
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  dp[3] = 1, dp[5] = 1;
  dp[1] = -1, dp[2] = -1, dp[4] = -1;

  cin >> N;

  cout << solve(N) << "\n";

  return EXIT_SUCCESS;
}