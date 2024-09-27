#include <bits/stdc++.h>
using namespace std;

int N;

void solve() {
  for (int i = 2; i <= N; i++) {
	while (N % i == 0) {
	  cout << i << "\n";
	  N /= i;
	}
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> N;
  solve();
}