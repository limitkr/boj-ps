#include <bits/stdc++.h>
using namespace std;

#define ar array

string name, label;
double credit, res = 0.0;
double total_credit = 0.0;
ar<char, 4> arr = {'D', 'C', 'B', 'A'};

double get_score(string s) {
  double score = 0.0, cnt = 1.0;
  ar<char, 4>::iterator iter;
  for (iter = arr.begin(); iter != arr.end(); ++iter) {
	if (*iter == s[0]) {
	  score = cnt;
	  if (s[1] == '+') score += 0.5;
	}
	cnt++;
  }
  return score;
}

void solve() {
  cin >> name >> credit >> label;
  if (label != "P") {
	res += credit * get_score(label);
	total_credit += credit;
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.precision(7);
  int T = 20;
  while (T--) solve();
  cout << res / total_credit << "\n";
}