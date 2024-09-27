#include <bits/stdc++.h>
using namespace std;

int A, B, V;

void solve() {
  cout << (int)(V - B - 1) / (A - B) + 1 << "\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> A >> B >> V;
  solve();
  return EXIT_SUCCESS;
}