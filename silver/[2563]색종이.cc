#include <bits/stdc++.h>
using namespace std;
#define MAX_LENGTH 100

int s[MAX_LENGTH][MAX_LENGTH];
int x, y, cnt = 0;

void solve() {
  cin >> x >> y;
  for (int i = x; i < x + 10; i++) {
	for (int j = y; j < y + 10; j++) {
	  if (s[i][j] == 0) {
		cnt++;
		s[i][j] = 1;
	  }
	}
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int T;
  cin >> T;

  while (T--) solve();
  cout << cnt << "\n";
}