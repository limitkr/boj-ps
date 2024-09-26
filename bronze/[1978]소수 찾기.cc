#include <bits/stdc++.h>
using namespace std;

int p, cnt = 0;

bool is_prime(int n) {
  if (n == 1) return false;
  for (int i = 2; i < int(sqrt(n)) + 1; i++) {
	if (n % i == 0) return false;
  }
  return true;
}

void solve() {
  cin >> p;
  if (is_prime(p)) cnt++;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int T;
  cin >> T;

  while (T--) solve();
  cout << cnt << "\n";
}