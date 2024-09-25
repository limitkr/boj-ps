#include <bits/stdc++.h>

using std::ios;
using std::cin;
using std::cout;

#define ll long long
#define ar array

int min = 0, max = 0;
int n;
int flag = 0;

void solve() {
  cin >> n;

  if (flag == 0) {
	min = n;
	max = n;
	flag = 1;
  }

  if (n < min) min = n;
  else if (n > max) max = n;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int N;
  cin >> N;

  while (N--) solve();

  cout << min << " " << max << "\n";
  return EXIT_SUCCESS;
}