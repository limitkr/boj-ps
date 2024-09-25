#include <bits/stdc++.h>
#define FAST_IO cin.tie(nullptr)->sync_with_stdio(false);
using namespace std;

int N;

void solve() {
	for (int i = N; i > 0; i--) {
		for (int k = 0; k < N - i; k++) {
			cout << " ";
		}
		for (int j = 0; j < i; j++) {
			cout << "*";
		}
		cout << "\n";
	}
}

int main() {
	FAST_IO;
	cin >> N;
	solve();
	return EXIT_SUCCESS;
}