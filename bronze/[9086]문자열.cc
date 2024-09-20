#include <bits/stdc++.h>
using namespace std;

void solve() {
  string str;
  cin >> str;
  cout << str[0] << str.back() << "\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int T;
  cin >> T;

  while (T--) solve();
  return EXIT_SUCCESS;
}