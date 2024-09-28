#include <bits/stdc++.h>
using namespace std;

#define FAST_IO cin.tie(nullptr)->sync_with_stdio(false)
#define endl '\n'
typedef long long ll;

int N;
ll x;
map<ll, int> m;

void solve() {
	ll res, MAX = 0;
	for (auto & it : m) {
		if (it.second > MAX) {
			res = it.first;
			MAX = it.second;
		}
		else if (it.second == MAX && res > it.first) res = it.first;
	}
	cout << res << endl;
}

int32_t main() {
	FAST_IO;
	cin >> N;
	while (N--) {
		cin >> x;
		m[x]++;
	}
	solve();
	return 0;
}