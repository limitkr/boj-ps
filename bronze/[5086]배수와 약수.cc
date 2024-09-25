#include <bits/stdc++.h>
using namespace std;

int a, b;

void solve() {
  if (b % a == 0) cout << "factor" << "\n";
  else if (a % b == 0) cout << "multiple" << "\n";
  else cout << "neither" << "\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  while (1) {
	cin >> a >> b;
	if (a == b && b == 0) break;
	solve();
  }
  return EXIT_SUCCESS;
}