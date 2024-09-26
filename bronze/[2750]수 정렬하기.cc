#include <bits/stdc++.h>
#define FAST_IO cin.tie(nullptr)->sync_with_stdio(false);
#define vec vector
#define ll long long
using namespace std;

int N;
vec<int> arr;

void solve() {
	ranges::sort(arr.begin(), arr.end());
	for (auto i: arr) {
		cout << i << "\n";
	}
}

int main() {
    FAST_IO;
	int x;
	cin >> N;
	while (N--) {
		cin >> x;
		arr.push_back(x);
	}
	solve();
	return EXIT_SUCCESS;
}