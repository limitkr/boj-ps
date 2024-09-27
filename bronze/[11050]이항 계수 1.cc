#include <bits/stdc++.h>
using namespace std;

int N, K;
map<int, int> dp;

int fac(int n) {
	if (n < 2) return dp[n];
	dp[n] = n * fac(n - 1);
	return dp[n];
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	dp[0] = 1, dp[1] = 1;
	cin >> N >> K;
	cout << fac(N) / (fac(N - K) * fac(K)) << "\n";
	return EXIT_SUCCESS;
}
