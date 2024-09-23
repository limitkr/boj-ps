#include <bits/stdc++.h>
#define FAST_IO cin.tie(nullptr)->sync_with_stdio(false);
#define vec vector
#define ll long long
using namespace std;

string S;

bool cmp(const int n1, const int n2) {
	if (n1 > n2) return true;
	return false;
}

void solve() {
	vec<int> arr;
	for (const char ch : S) {
		arr.push_back(ch - '0');
	}
	ranges::sort(arr.begin(), arr.end(), cmp);
	for (auto i : arr) {
		cout << i;
	}
	cout << "\n";
}

int main() {
    FAST_IO;
	cin >> S;
	solve();
	return EXIT_SUCCESS;
}