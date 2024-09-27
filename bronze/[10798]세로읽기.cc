#include <bits/stdc++.h>
using namespace std;

char n[5][15];
int r = 0, w = 0;
string S;

void solve() {
  cin >> S;
  for (char &ch : S) {
	n[r][w] = ch;
	w++;
  }
  w = 0;
  r++;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int T = 5;

  while (T--) solve();
  for (int i = 0; i < 15; i++) {
	for (auto &arr : n) {
	  if (arr[i] != '\0') cout << arr[i] << "";
	}
  }
  cout << "\n";
  return EXIT_SUCCESS;
}