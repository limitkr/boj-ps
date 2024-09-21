#include <bits/stdc++.h>
using namespace std;

int a, b, c;

void solve() {
  cin >> a >> b >> c;
  if (a + b + c != 180) cout << "Error" << "\n";
  else if (a == 60 && b == 60 && c == 60) cout << "Equilateral" << "\n";
  else if (a == b || b == c || c == a) cout << "Isosceles" << "\n";
  else cout << "Scalene" << "\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return EXIT_SUCCESS;
}