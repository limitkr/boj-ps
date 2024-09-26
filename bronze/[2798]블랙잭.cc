#include <bits/stdc++.h>
using namespace std;

#define vec vector

vec<int> arr;
int N, M;
int c;
int DIFF, result, flag = false;

void solve() {
  for (auto i = 0; i < arr.size() - 2; i++) {
	for (int j = i + 1; j < arr.size() - 1; j++) {
	  for (int k = j + 1; k < arr.size(); k++) {
		int res = arr[i] + arr[j] + arr[k];
		int diff = M - res < 0 ? res - M : M - res;
		if (!flag) {
		  DIFF = diff;
		  flag = true;
		};

		if (DIFF >= diff && res <= M) {
		  DIFF = diff;
		  result = res;
		}
	  }
	}
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> N >> M;
  while (N--) {
	cin >> c;
	arr.push_back(c);
  }
  solve();
  cout << result << "\n";
  return EXIT_SUCCESS;
}