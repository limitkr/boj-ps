#include <bits/stdc++.h>
using namespace std;

int T, X;
string OP;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> T;
	deque<int> d;

	while (T--) {
		cin >> OP;
		if (OP == "push_front") {
			cin >> X;
			d.push_front(X);
		} else if (OP == "push_back") {
			cin >> X;
			d.push_back(X);
		} else {
			if (OP == "pop_front") {
				if (!d.empty()) {
					cout << d.front();
					d.pop_front();
				} else cout << -1;
			} else if (OP == "pop_back") {
				if (!d.empty()) {
					cout << d.back();
					d.pop_back();
				} else cout << -1;
			} else if (OP == "size") {
				cout << d.size();
			} else if (OP == "empty") {
				if (d.empty()) cout << 1;
				else cout << 0;
			} else if (OP == "front") {
				if (d.empty()) cout << -1;
				else cout << d.front();
			} else if (OP == "back") {
				if (d.empty()) cout << -1;
				else cout << d.back();
			}
			cout << "\n";
		}

	}
	return EXIT_SUCCESS;
}
