#include <bits/stdc++.h>
using namespace std;

int N;

void solve() {
	int cnt = 0;
	for (int i = 2; i < N + 1; i++) {
		if (i % 5 == 0) cnt++;
		if (i % 25 == 0) cnt++;
		if (i % 125 == 0) cnt++;
	}
	cout << cnt << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> N;
	solve();
	return EXIT_SUCCESS;
}
