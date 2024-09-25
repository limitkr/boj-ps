#include <bits/stdc++.h>
using namespace std;

string S;
map<char, float> sc;

void solve() {
	cout << fixed << setprecision(1);
	if (S == "F") {
		cout << 0.0 << "\n";
		return;
	}
	char base, detail;
	base = S[0], detail = S[1];
	float res = sc[base];

	switch (detail) {
	case '+':
		res += 0.3;
		break;
	case '-':
		res -= 0.3;
		break;
	default:
		break;
	}
	cout << res << "\n";
}

int main() {
	sc['A'] = 4.0, sc['B'] = 3.0, sc['C'] = 2.0, sc['D'] = 1.0;
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> S;
	solve();
	return EXIT_SUCCESS;
}
