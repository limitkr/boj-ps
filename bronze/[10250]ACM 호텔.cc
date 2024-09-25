#include <bits/stdc++.h>
using namespace std;

int T, H, W, N;

void solve() {
	const int base = (N - 1) % H + 1;
	const int idx = (N - 1) / H + 1;
	cout << base << setw(2) << setfill('0') << idx << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> T;
	while (T--) {
		cin >> H >> W >> N;
		solve();
	}
	return EXIT_SUCCESS;
}
