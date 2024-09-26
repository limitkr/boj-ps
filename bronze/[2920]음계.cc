#include <bits/stdc++.h>
using namespace std;

#define vec vector
vec<int> arr;

int N;

void solve() {
	string str;
	for (const int n : arr) {
		str += to_string(n);
	}
	if (str == "12345678") cout << "ascending" << "\n";
	else if (str == "87654321") cout << "descending" << "\n";
	else cout << "mixed" << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int T = 8;
	while (T--) {
		cin >> N;
		arr.push_back(N);
	}
	solve();
	return EXIT_SUCCESS;
}
