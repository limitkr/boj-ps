#include <bits/stdc++.h>
#define FAST_IO cin.tie(nullptr)->sync_with_stdio(false);
#define ll long long
using namespace std;

int N;
map<int, ll> dp;

ll fib(int n) {
	if (dp.contains(n)) return dp[n];
	dp[n] = fib(n - 1) + fib(n - 2);
	return dp[n];
}

int main() {
    FAST_IO;
	dp[0] = 0;
	dp[1] = 1;
	cin >> N;
	cout << fib(N) << "\n";
	return EXIT_SUCCESS;
}