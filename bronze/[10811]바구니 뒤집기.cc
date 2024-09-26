#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

int i, j;
ar<int, 100> arr;

void solve() {
  cin >> i >> j;
  int temp;
  while (1) {
	temp = arr[i-1];
	arr[i-1] = arr[j-1];
	arr[j-1] = temp;
	if (j - i == 1 || j == i) break;
	i++;
	j--;
  }

}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  arr.fill(0);

  int N, M;
  cin >> N >> M;

  for (int i = 0; i < N; i++) {
	arr[i] = i + 1;
  }

  while (M--) solve();

  for (int i = 0; i < N; i++) {
	cout << arr[i] << " ";
  }

  return EXIT_SUCCESS;
}