#include <bits/stdc++.h>
#define FAST_IO cin.tie(nullptr)->sync_with_stdio(false);
#define vec vector
using namespace std;

struct Weight {
	int kg;
	int cm;
};
int N;
vec<Weight> w_arr;

void solve() {
	for (auto &w1 : w_arr) {
		int cnt = 1;
		for (auto &w2 : w_arr) {
			if (w1.cm < w2.cm && w1.kg < w2.kg) cnt++;
		}
		cout << cnt << " ";
	}
	cout << "\n";
}

int main() {
	FAST_IO;
	cin >> N;
	while (N--) {
		Weight w {};
		cin >> w.kg >> w.cm;
		w_arr.push_back(w);
	}
	solve();
	return EXIT_SUCCESS;
}
