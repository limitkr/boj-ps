#include <bits/stdc++.h>
#define FAST_IO cin.tie(nullptr)->sync_with_stdio(false);
#define vec vector
using namespace std;

int K, k;
vec<int> arr;

int main() {
	FAST_IO;
	cin >> K;
	while (K--) {
		cin >> k;
		if (k == 0) {
			arr.pop_back();
			continue;
		}
		arr.push_back(k);
	}
	cout << accumulate(arr.begin(), arr.end(), 0) << "\n";
	return EXIT_SUCCESS;
}