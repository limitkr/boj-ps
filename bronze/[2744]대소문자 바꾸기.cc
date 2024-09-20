#include <bits/stdc++.h>
using namespace std;

string S;

void solve() {
	for (const char ch : S) {
		if (islower(ch)) cout << static_cast<char>(toupper(ch));
		else cout << static_cast<char>(tolower(ch));
	}
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> S;
	solve();
	return EXIT_SUCCESS;
}
