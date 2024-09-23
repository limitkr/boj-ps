#include <bits/stdc++.h>
using namespace std;

#define vec vector

vec<string> arr;
int T;
string S;

int cmp(const string& s1, const string& s2) {
	if (s1.length() == s2.length()) {
		return s1 < s2;
	}
	return s1.length() < s2.length();
}

void solve() {
	sort(arr.begin(), arr.end(), cmp);
	for (int i = 0; i < arr.size(); i++) {
		if (i != 0 && arr[i] == arr[i - 1]) continue;
		cout << arr[i] << "\n";
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> T;
	while (T--) {
		cin >> S;
		arr.push_back(S);
	}
	solve();
	return EXIT_SUCCESS;
}
