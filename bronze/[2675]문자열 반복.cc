#include <bits/stdc++.h>
using namespace std;

int R;
string S;

void solve() {
  cin >> R >> S;
  for (char i : S) {
	for (int j = 0; j < R; j++) {
	  cout << i;
	}
  }
  cout << "\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int T;
  cin >> T;

  while (T--) solve();
  return EXIT_SUCCESS;
}