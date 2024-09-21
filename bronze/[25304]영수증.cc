#include <iostream>

using namespace std;

int n, b, a[10000];
int total;
int compare = 0;

void solve() {
  cin >> n >> b;
  compare += n * b;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> total;

  int t;
  cin >> t;
  while (t--) solve();

  if (compare == total) cout << "Yes" << endl;
  else cout << "No" << endl;
}