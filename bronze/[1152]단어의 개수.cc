#include <bits/stdc++.h>
using namespace std;

int cnt = 1;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  string S;
  getline(cin, S);
  int pos = 0;
  int len = S.length();

  if (len == 1 && isspace(S[0])) cnt = 0;
  else {
	for (char &iter : S) {
	  if (isspace(iter) > 0 && (pos != 0 && pos != len - 1))
		cnt++;
	  pos++;
	}
  }

  cout << cnt << "\n";
  return EXIT_SUCCESS;
}