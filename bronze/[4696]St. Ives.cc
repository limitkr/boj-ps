#include <bits/stdc++.h>
using namespace std;

#define FAST_IO cin.tie(nullptr)->sync_with_stdio(false)
#define endl '\n'

double solve(double x) {
  return 1 + x + pow(x, 2) + pow(x, 3) + pow(x, 4);
}

int32_t main() {
  FAST_IO;
  double x;
  while (cin >> x) {
    if (x == 0) break;
    cout << fixed;
    cout.precision(2);
    cout << solve(x) << endl;
  }
  return 0;
}

