#include <bits/stdc++.h>
#define FAST_IO cin.tie(nullptr)->sync_with_stdio(false);
#define vec vector
#define ll long long
using namespace std;

vec<int> arr;
int N, k;

bool cmp(const int n1, const int n2) {
	if (n1 > n2) return true;
	return false;
}

void solve() {
	ranges::sort(arr.begin(), arr.end(), cmp);
	cout << arr[k - 1] << "\n";
}
int main() {
    FAST_IO;
	cin >> N >> k;
	int x;
	while (N--) {
		cin >> x;
		arr.push_back(x);
	}
	solve();
	return EXIT_SUCCESS;
}