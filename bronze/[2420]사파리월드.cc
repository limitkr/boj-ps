#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll N, M;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> N >> M;
	if (N < 0) cout << abs(M - N) << "\n";
	else cout << abs(N - M) << "\n";
	return EXIT_SUCCESS;
}
