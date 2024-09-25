#include <bits/stdc++.h>
using namespace std;

#define ll long long

int A, B, C;

void solve() {
	ll t1 = A * A, t2 = B * B, t3 = C * C;
	if (t1 + t2 == t3 || t2 + t3 == t1 || t3 + t1 == t2) {
		cout << "right";
	} else cout << "wrong";
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	while (true) {
		cin >> A >> B >> C;
		if (A == 0 && B == 0 && C == 0) break;
		solve();
	}
	return EXIT_SUCCESS;
}
