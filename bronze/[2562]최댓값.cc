#include <bits/stdc++.h>

using std::cin;
using std::ios;
using std::cout;

#define ll long long
#define ar array

int n, max = 0, count = 0, ans_count = 0;


void solve() {
  count++;
  if (max < n) {
	max = n;
	ans_count = count;
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  while (cin >> n) solve();

  cout << max << "\n";
  cout << ans_count << "\n";

  return EXIT_SUCCESS;
}