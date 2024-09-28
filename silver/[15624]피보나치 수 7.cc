#include <bits/stdc++.h>
#define FAST_IO cin.tie(nullptr)->sync_with_stdio(false);
#define vec vector
using namespace std;

int N;

void solve() {
	vec<int> dp(2 + N);
	dp[0] = 0;
	dp[1] = 1;
	for (int i = 2; i < N + 1; i++) {
		dp[i] = (dp[i - 1] + dp[i - 2]) % 1'000'000'007;
	}
	cout << dp[N] << "\n";
}

int main() {
    FAST_IO;
	cin >> N;
	solve();
	return EXIT_SUCCESS;
}