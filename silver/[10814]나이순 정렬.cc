#include <bits/stdc++.h>
using namespace std;

#define vec vector

struct Member {
	int age;
	string name;
};
int T;
static vec<Member> m;

bool cmp(const Member& m1, const Member& m2) {
	if (m1.age != m2.age) return m1.age < m2.age;
	return false;
}

void solve() {
	stable_sort(m.begin(), m.end(), cmp);
	for (auto & i : m) {
		cout << i.age << " " << i.name << "\n";
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> T;
	while (T--) {
		Member member {};
		cin >> member.age >> member.name;
		m.push_back(member);
	}
	solve();
	return EXIT_SUCCESS;
}
