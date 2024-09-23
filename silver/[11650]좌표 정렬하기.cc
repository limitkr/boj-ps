#include <bits/stdc++.h>
#define FAST_IO cin.tie(nullptr)->sync_with_stdio(false);
#define vec vector
using namespace std;

struct Coord {
	int x;
	int y;
};
vec<Coord> cs;
int N;

bool cmp(const Coord& c1, const Coord &c2) {
	if (c1.x != c2.x) return c1.x < c2.x;
	return c1.y < c2.y;
}

void solve() {
	ranges::sort(cs.begin(), cs.end(), cmp);
	for (auto & c : cs) {
		cout << c.x << " " << c.y << "\n";
	}
}

int main() {
	FAST_IO;
	cin >> N;
	while (N--) {
		Coord c {};
		cin >> c.x >> c.y;
		cs.push_back(c);
	}
	solve();
	return EXIT_SUCCESS;
}
