#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int N, sum = 0;
  string nums;
  cin >> N >> nums;

  for (int i = 0; i < N; i++) {
	int n = nums[i] - '0';
	sum += n;
  }
  cout << sum << "\n";

  return EXIT_SUCCESS;
}