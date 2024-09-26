#include <bits/stdc++.h>
#define FAST_IO cin.tie(nullptr)->sync_with_stdio(false);
#define vec vector
#define ll long long
using namespace std;

int T = 5, N;
vec<int> arr;

void solve() {
	const int sum = accumulate(arr.begin(), arr.end(), 0);
	ranges::sort(arr.begin(), arr.end());
	cout << sum / 5 << "\n";
	cout << arr[2] << "\n";
}

int main() {
    FAST_IO;
	int x;
	while (T--) {
		cin >> x;
		arr.push_back(x);
	}
	solve();
	return EXIT_SUCCESS;
}