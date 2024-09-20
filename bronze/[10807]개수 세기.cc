#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

// int n, b;
int arr[100];

void solve() {
  int N, v, count = 0;

  cin >> N;

  for (int i = 0; i < N; i++) {
	cin >> arr[i];
  }

  cin >> v;

  for (int i = 0; i < N; i++) {
	if (v == arr[i]) count++;
  }

  cout << count << "\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  solve();
}