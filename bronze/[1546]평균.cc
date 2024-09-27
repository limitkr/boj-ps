#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

int n;
double max_score = 0, sum = 0;
ar<double, 1000> arr;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.precision(15);

  int N;
  cin >> N;

  for (int i = 0; i < N; i++) {
	cin >> n;
	if (max_score < n) max_score = n;
	arr[i] = n;
  }

  for (int i = 0; i < N; i++) {
	double new_score = arr[i] / max_score * 100;
	sum += new_score;
  }

  double res = sum / (double)N;
  cout << res << "\n";

  return EXIT_SUCCESS;
}