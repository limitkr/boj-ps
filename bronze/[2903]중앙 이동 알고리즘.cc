#include <bits/stdc++.h>
using namespace std;

int N;

void solve() {
  cin >> N;
  int x, i = 2;
  while (N--) {
	i = i * 2 - 1;
	x = i * i;
  }
  cout << x << "\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
}
