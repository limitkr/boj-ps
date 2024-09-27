#include <bits/stdc++.h>
using namespace std;

#define ar array

string S;
const int DIFF = int('a') - int('A');
const int START_CHAR_POS = int('A');
ar<int, 26> arr;
int flag = 0;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> S;
  arr.fill(0);
  for (char &ch : S) {
	int curr = int(ch);
	if (curr >= int('a')) curr -= DIFF;
	curr -= START_CHAR_POS;
	arr[curr] += 1;
  }
  int max = 0, max_pos = 0;
  for (int i = 0; i < 26; i++) {
	if (max < arr[i]) {
	  max = arr[i];
	  max_pos = i;
	  flag = 0;
	} else if (max == arr[i]) {
	  flag = 1;
	}
  }
  if (flag == 1) cout << "?" << "\n";
  else cout << char(max_pos + START_CHAR_POS) << "\n";
  return EXIT_SUCCESS;
}