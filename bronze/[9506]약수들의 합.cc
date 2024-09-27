#include <bits/stdc++.h>
using namespace std;

#define vec vector
int N;

void solve() {
  vec<int> v;
  int ref = 0;
  for (int i = 1; i < sqrt(N); i++) {
	if (N % i == 0) {
	  v.push_back(i);
	  ref += i;
	  if (i != N / i) {
		v.push_back(N / i);
		ref += N / i;
	  }
	}
  }
  sort(v.begin(), v.end());
  if (ref - N != N) cout << N <<" is NOT perfect.";
  else {
	cout << N << " = ";
	for (int i = 0; i < v.size() - 1; i++) {
	  cout << v[i];
	  if (i == v.size() - 2) break;
	  cout << " + ";
	}
  }
  cout << "\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  while (1) {
	cin >> N;
	if (N == -1) break;
	solve();
  }
}