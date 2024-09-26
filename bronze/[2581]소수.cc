#include <bits/stdc++.h>
using namespace std;

int M, N, res = 0, sum = 0;

bool is_prime(int n) {
  if (n == 1) return false;
  for (int i = 2; i < int(sqrt(n)) + 1; i++) {
	if (n % i == 0) return false;
  }
  return true;
}

void solve() {
  for (int i = M; i <= N; i++) {
	if (is_prime(i)) {
	  if (res == 0) res = i;
	  sum += i;
	}
  }
  if (res == 0) cout << -1 << "\n";
  else {
	cout << sum << "\n";
	cout << res << "\n";
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> M >> N;
  solve();
}