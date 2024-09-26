#include <bits/stdc++.h>
using namespace std;

string A, B;
int nA, nB;

void solve() {
  cin >> A >> B;
  reverse(A.begin(), A.end());
  reverse(B.begin(), B.end());
  nA = stoi(A);
  nB = stoi(B);

  if (nA > nB) cout << nA << "\n";
  else cout << nB << "\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  solve();
  return EXIT_SUCCESS;
}