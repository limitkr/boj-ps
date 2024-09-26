#include <bits/stdc++.h>
using namespace std;

int N;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> N;
  int D = 1;
  if (N == 1) {
	cout << D << "\n";
	return EXIT_SUCCESS;
  }
  else {
	int diff = 5, S = 2;
	while (1) {
	  D += 1;
	  if (S <= N && N <= S + diff) break;
	  S += diff + 1;
	  diff += 6;
	}
  }
  cout << D << "\n";
  return EXIT_SUCCESS;
}