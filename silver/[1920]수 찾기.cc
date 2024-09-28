#include <bits/stdc++.h>
#define FAST_IO cin.tie(nullptr)->sync_with_stdio(false);
#define vec vector
using namespace std;

vec<int> A;
int N, M, n, m;

void solve() {
	cin >> M;
	while (M--) {
		cin >> m;
		const bool res = ranges::binary_search(A.begin(), A.end(), m);
		cout << res << "\n";
	}
}

int main() {
	FAST_IO;
	cin >> N;
	while (N--) {
		cin >> n;
		A.push_back(n);
	}
	ranges::sort(A.begin(), A.end());
	solve();
	return EXIT_SUCCESS;
}
