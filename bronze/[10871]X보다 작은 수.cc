#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

int X, A;


void solve() {
  cin >> A;
  if (A < X) cout << A << " ";

}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int N;
  cin >> N >> X;

  while (N--) solve();
}