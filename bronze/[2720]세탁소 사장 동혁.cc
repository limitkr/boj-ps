#include <bits/stdc++.h>
using namespace std;

#define ar array

int C;
ar<int, 4> arr;
const ar<int, 4> REF = {25, 10, 5, 1};

void solve() {
  arr.fill(0);
  cin >> C;
  for (int i = 0; i < 4; i++) {
	while (C >= REF[i]) {
		C -= REF[i];
		arr[i] += 1;
	}
  }
  for (int &i : arr) {
	cout << i << " ";
  }
  cout << "\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int T;
  cin >> T;

  while (T--) solve();
  return EXIT_SUCCESS;
}