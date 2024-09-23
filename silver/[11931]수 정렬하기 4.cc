#include <bits/stdc++.h>
using namespace std;

#define FAST_IO cin.tie(nullptr)->sync_with_stdio(false)
#define endl '\n'
#define vt vector

int N;

int32_t main() {
	FAST_IO;
	cin >> N;
	vt<int> arr(N);
	for (int i = 0; i < N; i++) cin >> arr[i];
	ranges::sort(arr, [](int a, int b) { return a > b; });
	for (auto n : arr) cout << n << endl;
	return 0;
}