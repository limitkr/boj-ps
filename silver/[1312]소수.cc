#include <bits/stdc++.h>
#define FAST_IO cin.tie(nullptr)->sync_with_stdio(false);
using namespace std;

int A, B, N;

void solve() {
	int res = 0;
	while (N--) {
		A %= B;
		A *= 10;
		res = A / B;
	}
	cout << res << "\n";
}

int main() {
	FAST_IO;
	cin >> A >> B >> N;
	solve();
	return EXIT_SUCCESS;
}