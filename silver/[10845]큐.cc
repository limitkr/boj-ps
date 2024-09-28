#include <bits/stdc++.h>
using namespace std;

int T, X;
string OP;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> T;
	queue<int> q;

	while (T--) {
		cin >> OP;
		if (OP == "push") {
			cin >> X;
			q.push(X);
		} else {
			if (OP == "pop") {
				if (!q.empty()) {
					cout << q.front();
					q.pop();
				} else cout << -1;
			} else if (OP == "size") {
				cout << q.size();
			} else if (OP == "empty") {
				if (q.empty()) cout << 1;
				else cout << 0;
			} else if (OP == "front") {
				if (q.empty()) cout << -1;
				else cout << q.front();
			} else if (OP == "back") {
				if (q.empty()) cout << -1;
				else cout << q.back();
			}
			cout << "\n";
		}

	}
	return EXIT_SUCCESS;
}
