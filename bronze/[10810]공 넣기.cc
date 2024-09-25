#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

int N, arr[100];


void solve() {
  int i, j, k;
  cin >> i >> j >> k;

  for (; i < j + 1; i++) {
	arr[i - 1] = k;
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> N;

  int T;
  cin >> T;
  int count = 0;

  while (count != T) {
	solve();
	count++;
  }

  for (int i = 0; i < N; i++) {
	cout << arr[i] << " ";
  }

  return EXIT_SUCCESS;
}