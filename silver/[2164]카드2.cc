#include <bits/stdc++.h>
using namespace std;

int N;

int solve() {
	int sq = 2;
	while (true) {
		if (N <= 2) return N;
		if (sq >= N) return (N - (sq / 2)) * 2;
		sq *= 2;
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> N;
	cout << solve() << "\n";
	return EXIT_SUCCESS;
}
