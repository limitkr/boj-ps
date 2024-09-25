#include <bits/stdc++.h>
using namespace std;

#define FAST_IO cin.tie(nullptr)->sync_with_stdio(false)
#define endl '\n'
#define vt vector

int N, T, P;

int32_t main() {
  FAST_IO;
  cin >> N;
  vt<int> shirt(6);
  for (int i = 0; i < 6; i++) cin >> shirt[i];
  cin >> T >> P;
  int res = 0;
  for (auto n : shirt) {
    res += n / T;
    if (n % T > 0) res += 1;
  }
  cout << res << endl;
  cout << N / P << " " << N % P << endl;
  return 0;
}
