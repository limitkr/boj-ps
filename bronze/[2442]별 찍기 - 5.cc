#include <bits/stdc++.h>
#define FAST_IO cin.tie(nullptr)->sync_with_stdio(false);
using namespace std;

int N;

void solve() {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N - i - 1; j++) {
			cout << " ";
		}
		for (int k = 0; k < (i + 1) * 2 - 1; k++) {
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