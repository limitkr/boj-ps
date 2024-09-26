#include <bits/stdc++.h>
#define FAST_IO cin.tie(nullptr)->sync_with_stdio(false);
#define vec vector
using namespace std;

int T;
string s1, s2;

void solve() {
	int res;
	cout << "Distances: ";
	for (int i = 0; i < s1.length(); i++) {
		const int n1 = s1[i] - 64, n2 = s2[i] - 64;
		if (n1 > n2) {
			res = (n2 + 26) - n1;
		} else {
			res = n2 - n1;
		}
		cout << res << " ";
	}
	cout << "\n";
}

int main() {
    FAST_IO;
    cin >> T;
    while (T--) {
        cin >> s1 >> s2;
        solve();
    }
    return EXIT_SUCCESS;
}