#include <bits/stdc++.h>
using namespace std;

#define FAST_IO cin.tie(nullptr)->sync_with_stdio(false)
#define endl '\n'

void solve(int n) {
	if (n % 3 == 0 && n % 5 == 0) cout << "FizzBuzz";
	else if (n % 3 == 0 && n % 5 != 0) cout << "Fizz";
	else if (n % 3 != 0 && n % 5 == 0) cout << "Buzz";
	else cout << n;
	cout << endl;
}

int32_t main() {
	FAST_IO;
	string S;
	for (int i = 0; i < 3; i++) {
		cin >> S;
		if (isdigit(S[0])) {
			solve(stoi(S) + 3 - i);
			return 0;
		}
	}
	return 0;
}
