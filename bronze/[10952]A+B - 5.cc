#include <iostream>

using namespace std;

int n, b, a[10000];
int flag = 0;

void solve() {
  cin >> n >> b;
  if (n == 0 && b == 0) {
	flag = 1;
	return;
  }
  cout << n + b << "\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);


  while (flag != 1) {
	solve();
  }
}