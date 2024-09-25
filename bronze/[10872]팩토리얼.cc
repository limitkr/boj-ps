#include <bits/stdc++.h>
using namespace std;

int dp[13], N;

int fac(int n) {
	if (n < 2) return dp[n];
	dp[n] = n * fac(n - 1);
	return dp[n];
}

int main() {
	dp[0] = 1;
	dp[1] = 1;
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> N;
	cout << fac(N) << "\n";
	return EXIT_SUCCESS;
}
