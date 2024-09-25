#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  string s1, s2;
  cin >> s1;

  s2 = s1;
  reverse(s1.begin(), s1.end());
  if (s1 == s2) cout << 1 << "\n";
  else  cout << 0 << "\n";

  return EXIT_SUCCESS;
}