#include <bits/stdc++.h>
using namespace std;

#define ll long long

int N;
map<int, ll> dp;

ll fib(int n) {
  if (dp.contains(n)) return dp[n];
  dp[n] = fib(n - 1) + fib(n - 2);
  return dp[n];
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  dp[0] = 0;
  dp[1] = 1;

  cin >> N;

  cout << fib(N) << "\n";

  return EXIT_SUCCESS;
}