#include <iostream>

using namespace std;

int n, b, a[10000];

void solve() {
  cin >> n;
  for (int i = 1; i <= n; i++) {
	for (int j = n; j > i; j--) cout << " ";
	for (int k = 0; k < i; k++) cout << "*";
	cout << "\n";
  }

}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  solve();
}