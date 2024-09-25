#include <bits/stdc++.h>
#define FAST_IO cin.tie(nullptr)->sync_with_stdio(false);
#define vec vector
using namespace std;

int N, T = 3;
vec<int> v;

void solve() {
	ranges::sort(v.begin(), v.end());
	cout << v[1] << "\n";
}

int main() {
	FAST_IO;
	while (T--) {
		cin >> N;
		v.push_back(N);
	}
	solve();
	return EXIT_SUCCESS;
}