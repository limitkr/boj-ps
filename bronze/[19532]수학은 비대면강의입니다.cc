#include <bits/stdc++.h>
using namespace std;

int a, b, c, d, e, f;
int x, y;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> a >> b >> c >> d >> e >> f;

  x = (c * e - b * f) / (a * e - b * d);
  y = (c * d - a * f) / (b * d - a * e);
  cout << x << " " << y << "\n";
  return EXIT_SUCCESS;
}
