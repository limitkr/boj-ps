#include <bits/stdc++.h>
using namespace std;

#define ar array
ar<int, 2> arr1, arr2;

int x, y;

int get_diff(ar<int, 2> arr, int tar) {
  if (arr[0] == arr[1]) return tar;
  else if (arr[0] == tar && arr[1] != tar) return arr[1];
  else if (arr[1] == tar && arr[0] != tar) return arr[0];
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  arr1.fill(0), arr2.fill(0);

  for (int i = 0; i < 2; i++) {
	cin >> arr1[i], cin >> arr2[i];
  }

  cin >> x >> y;
  x = get_diff(arr1, x);
  y = get_diff(arr2, y);
  cout << x << " " << y << "\n";

  return EXIT_SUCCESS;
}