#include <bits/stdc++.h>
using namespace std;

#define ar array
ar<int, 3> a;

void solve() {
  sort(a.begin(), a.end());
  if (a[2] >= a[0] + a[1]) cout << "Invalid" << "\n";
  else if (a[0] == a[1] && a[1] == a[2]) cout << "Equilateral" << "\n";
  else if (a[0] == a[1] || a[1] == a[2] || a[0] == a[2]) cout << "Isosceles" << "\n";
  else cout << "Scalene" << "\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  while (true) {
    cin >> a[0] >> a[1] >> a[2];
    if (a[0] == 0) break;
    solve();
  }
  return EXIT_SUCCESS;
}