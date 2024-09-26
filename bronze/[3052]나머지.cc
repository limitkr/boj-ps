#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

int n, cnt = 0;
ar<int, 10> arr;


void solve() {
  cin >> n;
  int res = n % 42;
  arr[cnt++] = res;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int T = 10;
  int diff_cnt = 1;

  while (T--) solve();
  sort(begin(arr), end(arr));

  for (int i = 0; i < 9; i++) {
	if (arr[i] != arr[i+1]) diff_cnt += 1;
  }
  cout << diff_cnt << "\n";

  return EXIT_SUCCESS;
}