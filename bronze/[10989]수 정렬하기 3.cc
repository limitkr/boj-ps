#include <bits/stdc++.h>
using namespace std;

#define vec vector
#define MAX 10000

int T, n;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> T;
	vec<int> arr(MAX, 0);
	while (T--) {
		cin >> n;
		arr[n - 1] = arr[n - 1] + 1;
	}
	for (int i = 0; i <= MAX; i++) {
		for (int j = 1; j <= arr[i]; j++) {
			cout << i + 1 << "\n";
		}
	}
	return EXIT_SUCCESS;
}
