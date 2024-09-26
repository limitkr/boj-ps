#include <bits/stdc++.h>
using namespace std;

#define ll long long
ll N;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> N;
  cout << (N * (N - 2) * (N - 1)) / 6 << "\n";
  cout << 3 << "\n";
  return EXIT_SUCCESS;
}