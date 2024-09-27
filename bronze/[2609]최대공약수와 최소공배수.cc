#include <bits/stdc++.h>
using namespace std;

int A, B;

void solve() {
	cout << gcd(A, B) << "\n";
	cout << lcm(A, B) << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> A >> B;
	solve();
	return EXIT_SUCCESS;
}
