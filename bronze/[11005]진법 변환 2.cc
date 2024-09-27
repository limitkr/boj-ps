#include <bits/stdc++.h>
using namespace std;

int N, B;
const string S = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

void solve() {
  cin >> N >> B;
  string res = "";
  while (N > 0) {
	int remain = N % B;
	res = S[remain] + res;
	N /= B;
  }
  cout << res << "\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
}