#include <bits/stdc++.h>
using namespace std;

#define ar array

string S;
ar<int, 26> arr;
int MIN_CHAR = (int)'a';
int flag = -1, res_cnt = 0;

void solve() {
  arr.fill(0);
  cin >> S;
  flag = int(S[0]) - MIN_CHAR;
  for (char &ch : S) {
	int curr = int(ch) - MIN_CHAR;
	if (flag != curr && arr[curr] > 0) {
	  return;
	}
	arr[curr] += 1;
	flag = curr;
  }
  res_cnt++;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int N;
  cin >> N;
  while (N--) solve();

  cout << res_cnt << "\n";
  return EXIT_SUCCESS;
}