#include <bits/stdc++.h>
using namespace std;

#define vec vector

int x, y;
vec<int> ar1, ar2;

void solve() {
  sort(ar1.begin(), ar1.end());
  sort(ar2.begin(), ar2.end());
  int w = ar1.back() - ar1.front(), h = ar2.back() - ar2.front();
  cout << w * h << "\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int T;
  cin >> T;

  while (T--) {
	cin >> x >> y;
	ar1.push_back(x);
	ar2.push_back(y);
  }
  solve();
  return EXIT_SUCCESS;
}