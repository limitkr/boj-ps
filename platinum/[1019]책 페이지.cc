#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define FAST_IO cin.tie(nullptr)->sync_with_stdio(false)
#define endl '\n'
#define ar array

ll N;

void solve(ll page) {
	ar<ll, 10> res{};
	res.fill(0);
	ll digit = 1;
	while (digit <= page) {
		ll R = page % digit;
		ll M = (page / digit) % 10;
		ll L = page / (digit * 10);
		for (int i = 0; i < 10; ++i) { res[i] += L * digit; }
		for (int i = 1; i <= M; ++i) { res[i] += digit; }
		if (digit > 1) {
			res[M] -= digit;
			res[M] += R + 1;
		}
		digit *= 10;
	}
	for (auto n : res) { cout << n << " "; }
}

int main() {
	FAST_IO;
	cin >> N;
	solve(N);
	return 0;
}
