#include <bits/stdc++.h>
#include <ranges>
#define FAST_IO cin.tie(nullptr)->sync_with_stdio(false);
using namespace std;

int N, M;
string S;
map<string, int> temp, v;

void solve() {
	while (M--) {
		cin >> S;
		if (temp.contains(S)) v[S] = 1;
	}
	cout << v.size() << "\n";
	for (auto &[key, v] : v) {
		cout << key << "\n";
	}
}

int main() {
	FAST_IO;
	cin >> N >> M;
	while (N--) {
		cin >> S;
		temp[S] = 1;
	}
	solve();
	return EXIT_SUCCESS;
}