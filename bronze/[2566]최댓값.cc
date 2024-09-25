#include <bits/stdc++.h>
using namespace std;

#define MAX_LENGTH 9

int n, r, w, res = 0;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  for (int i = 0; i < MAX_LENGTH; i++) {
	for (int j = 0; j < MAX_LENGTH; j++) {
	  cin >> n;
	  if (res < n) {
		res = n;
		r = i;
		w = j;
	  }
	}
  }
  cout << res << "\n";
  cout << r + 1 << " " << w + 1 << "\n";
  return EXIT_SUCCESS;
}