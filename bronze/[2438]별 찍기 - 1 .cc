#include <iostream>

using namespace std;

int n, b, a[10000];

void solve() {
  cin >> n;
  for (int i = 0; i < n; i += 1) {
	for (int j = 0; j <= i; j += 1) {
	  cout << "*";
	}
	cout << "\n";
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  solve();
}