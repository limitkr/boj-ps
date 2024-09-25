#include <bits/stdc++.h>
using namespace std;

int N, K;

void solve() {
  int cnt = 0;
  for (int i = 1; i < N+1; i++) {
	if (N % i == 0) cnt++;
	if (cnt == K) {
	  cout << i << "\n";
	  return;
	}
  }
  cout << 0 << "\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> N >> K;
  solve();
}