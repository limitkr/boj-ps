#include <bits/stdc++.h>
#define FAST_IO cin.tie(nullptr)->sync_with_stdio(false);
#define vec vector
using namespace std;

map<int, int> v;

int N, M, n, m;
void solve() {
	cin >> M;
	while (M--) {
		cin >> m;
		if (!v.contains(m)) cout << 0 << " ";
		else cout << v[m] << " ";
	}
	cout << "\n";
}

int main() {
	FAST_IO;
	cin >> N;
	while (N--) {
		cin >> n;
		if (!v.contains(n)) v[n] = 0;
		v[n]++;
	}
	solve();
	return EXIT_SUCCESS;
}
