#include <bits/stdc++.h>
using namespace std;

int T, N, K;

void solve(int floor, int hosu) {
	int dp[15][15] = { 0, };
	for (int i = 0; i <= hosu; i++) {
		dp[0][i] = i;
	}
	for (int i = 0; i <= floor; i++) {
		dp[i][1] = 1;
	}
	for (int i = 1; i <= floor; i++) {
		for (int j = 2; j <= hosu; j++) {
			dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
		}
	}
	cout << dp[floor][hosu] << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> T;
	while (T--) {
		cin >> N >> K;
		solve(N, K);
	}
	return EXIT_SUCCESS;
}
