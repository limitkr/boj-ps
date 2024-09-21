#include <bits/stdc++.h>
using namespace std;

#define FAST_IO cin.tie(nullptr)->sync_with_stdio(false)
#define endl '\n'

int A, B, C;

int32_t main() {
  FAST_IO;
  cin >> A >> B >> C;
  cout << A + B - C << endl;
  int temp;
  if (B < 10) temp = 10;
  else if (B < 100) temp = 100;
  else if (B < 1000) temp = 1000;
  else temp = 10000;
  cout << A * temp + B - C << endl;
  return 0;
}
