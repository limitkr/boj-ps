#include <bits/stdc++.h>
using namespace std;

int T;
string S;

bool solve() {
	stack<char> s;
	for (char ch : S) {
		if (ch == '(') {
			s.push(ch);
			continue;
		}
		if (ch == ')') {
			if (s.empty()) return false;
			s.pop();
		}
	}
	return s.empty();
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> T;
	while (T--) {
		cin >> S;
		cout << (solve() ? "YES" : "NO") << "\n";
	}
	return EXIT_SUCCESS;
}
