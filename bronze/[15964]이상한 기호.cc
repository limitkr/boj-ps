#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll A, B;

void solve() {
	cout << (A + B) * (A - B) << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> A >> B;
	solve();
	return EXIT_SUCCESS;
}
