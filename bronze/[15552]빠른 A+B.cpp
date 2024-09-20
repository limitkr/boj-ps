#include <iostream>

using namespace std;

int n, b, a[10000];

void solve() {
  cin >> n >> b;
  cout << n + b << "\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--) solve();
}
