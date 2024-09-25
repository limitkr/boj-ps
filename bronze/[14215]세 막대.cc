#include <bits/stdc++.h>
using namespace std;

#define ar array

ar<int, 3> arr;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> arr[0] >> arr[1] >> arr[2];
  sort(arr.begin(), arr.end());
  int res = arr[0] + arr[1] + min(arr[2], arr[0] + arr[1] - 1);
  cout << res << "\n";
  return EXIT_SUCCESS;
}