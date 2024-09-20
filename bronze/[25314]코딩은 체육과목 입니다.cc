#include <iostream>

using namespace std;

int n, b, a[10000];

void solve() {
  cin >> n;

  for (int i = 1; i < n; i += 4) {
	cout << "long ";
  }
  cout << "int" << endl;

}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  solve();
}