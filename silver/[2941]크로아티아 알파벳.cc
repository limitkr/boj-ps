#include <bits/stdc++.h>
using namespace std;

#define ar array

string S;
ar<string, 8> arr = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};

void solve() {
  cin >> S;
  for (auto & iter : arr) {
	while (S.find(iter) != string::npos) {
	  S.replace(S.find(iter), iter.length(), "*");
	}
  }
  cout << S.length() << "\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
}