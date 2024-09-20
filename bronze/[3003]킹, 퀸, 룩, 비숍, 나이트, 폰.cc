#include <bits/stdc++.h>
using namespace std;

#define ar array

ar<int, 6> arr = {1, 1, 2, 2, 2, 8};
int n;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  for (int i = 0; i < 6; i++) {
	cin >> n;
	cout << arr[i] - n << " ";
  }
  cout << "\n";

  return EXIT_SUCCESS;
}