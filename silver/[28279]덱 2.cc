#include <bits/stdc++.h>
using namespace std;

#define FAST_IO cin.tie(nullptr)->sync_with_stdio(false);
#define endl "\n";
#define vt vector

deque<int> d;
int N, n;
char x;

void solve(char op) {
	switch (op) {
	case '1':
		cin >> n;
		d.push_front(n);
		return;
	case '2':
		cin >> n;
		d.push_back(n);
		return;
	case '3':
		if (!d.empty()) {
			cout << d.front();
			d.pop_front();
		}
		else cout << -1;
		break;
	case '4':
		if (!d.empty()) {
			cout << d.back();
			d.pop_back();
		}
		else cout << -1;
		break;
	case '5':
		cout << d.size();
		break;
	case '6':
		if (!d.empty()) cout << 0;
		else cout << 1;
		break;
	case '7':
		if (!d.empty()) cout << d.front();
		else cout << -1;
		break;
	case '8':
		if (!d.empty()) cout << d.back();
		else cout << -1;
		break;
	}
	cout << endl;
}

int main() {
	FAST_IO;
	cin >> N;
	while (N--) {
		cin >> x;
		solve(x);
	}

	return EXIT_SUCCESS;
}