#include <bits/stdc++.h>
using namespace std;

#define vec vector
#define SIZE 9
vec<int> arr(SIZE);

int A, B, C;

void solve() {
    for (const char ch : to_string(A * B * C)) {
	    arr[ch - '0'] += 1;
    }
	for (int i = 0; i < SIZE + 1; i++) {
		cout << arr[i] << "\n";
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> A >> B >> C;
	solve();
	return EXIT_SUCCESS;
}
