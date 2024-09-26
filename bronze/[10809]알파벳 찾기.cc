#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  string str;
  cin >> str;

  for (int i = int('a'); i <= int('z'); i++) {
	char curr = char(i);
	if (str.find(curr) != string::npos) cout << str.find(curr) << " ";
	else cout << -1 << " ";
  }
  return EXIT_SUCCESS;
}