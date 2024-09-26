#include <bits/stdc++.h>
using namespace std;

string B;
int N;

void solve() {
  cin >> B >> N;
  int res = stoi(B, nullptr, N);
  cout << res << "\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
}