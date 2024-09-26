#include <bits/stdc++.h>
using namespace std;

string S;

void solve() {
  cin >> S;
  int res = 0;

  for (char &ch : S) {
	int n = ((int)ch - 'A') / 3 + 1;
	if (ch == 'S' || ch == 'V' || ch >= 'Y') {
		n -= 1;
	}
	res += n + 2;
  }
  cout << res << "\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  solve();
  return EXIT_SUCCESS;
}