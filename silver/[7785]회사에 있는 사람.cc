#include <bits/stdc++.h>
#include <ranges>
#define FAST_IO cin.tie(nullptr)->sync_with_stdio(false);
#define vec vector
using namespace std;

int N;
map<string, int> v;

void solve() {
	for (auto &[key, v] : ranges::reverse_view(v)) {
		cout << key << "\n";
	}
}

int main() {
	FAST_IO;
	cin >> N;
	while (N--) {
		string name, log;
		cin >> name >> log;
		if (log == "leave") v.erase(name);
		else v[name] = 1;
	}
	solve();
	return EXIT_SUCCESS;
}