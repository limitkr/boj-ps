#include <bits/stdc++.h>
using namespace std;

int arr[5];

void solve() {
	int res = 0;
	for (int i : arr) {
		res += i * i;
	}
	cout << res % 10 << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int T = 0;
	while (T < 5) {
		cin >> arr[T];
		T++;
	}
	solve();
	return EXIT_SUCCESS;
}
