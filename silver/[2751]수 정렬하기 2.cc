#include <bits/stdc++.h>
using namespace std;

#define vec vector

vec<int> arr;
int T;

void solve() {
	int _min = arr[0], _max = arr[0];
	for (const int n : arr) {
		_min = min(n, _min);
		_max = max(n, _max);
	}
	const int N = _max - _min + 1;

	vec<int> h[N];
	for (int i : arr) {
		h[i - _min].push_back(i);
	}

	int idx = 0;
	for (int i = 0; i < N; i++) {
		for (int x : h[i]) arr[idx++] = x;
	}
	for (const int n : arr) cout << n << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> T;
	while (T--) {
		int n;
		cin >> n;
		arr.push_back(n);
	}
	solve();
	return EXIT_SUCCESS;
}
