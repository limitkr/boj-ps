#include <bits/stdc++.h>
using namespace std;

int N, cnt = 1;

void solve() {
  while (N > cnt) {
	N -= cnt;
	cnt += 1;
  }
  int a, b;
  if (cnt % 2 == 0) {
	a = N;
	b = cnt - N + 1;
  } else {
	a = cnt - N + 1;
	b = N;
  }
  cout << a << "/" << b << "\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> N;
  solve();
  return EXIT_SUCCESS;
}