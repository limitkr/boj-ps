#include <bits/stdc++.h>
using namespace std;

#define vec vector

vec<int> arr;
int a1, a0, c, n0;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> a1 >> a0;
  cin >> c;
  cin >> n0;

  if ((a1 * n0 + a0 <= c*n0) && a1 <= c) {
    cout << 1 << "\n";
  } else {
    cout << 0 << "\n";
  }
  return EXIT_SUCCESS;
}
