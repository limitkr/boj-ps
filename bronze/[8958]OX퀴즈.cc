#include <bits/stdc++.h>
using namespace std;

int T;
string S;

void solve() {
	int combo = 1, res = 0;
	for (const char ch : S) {
		if (ch == 'O') res += combo++;
		else combo = 1;
	}
	cout << res << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> T;
	while (T--) {
		cin >> S;
		solve();
	}
	return EXIT_SUCCESS;
}
