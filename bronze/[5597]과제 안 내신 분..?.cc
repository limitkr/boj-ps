#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

int n, b;

ar<int, 30> arr;

void solve() {
  cin >> n;
  arr[n-1] = 1;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  arr.fill(0);

  int C = 28;

  while (C--) solve();

  for (int i = 0; i < 30; i++) {
	if (arr[i] == 0) cout << i + 1 << "\n";
  }

  return EXIT_SUCCESS;
}