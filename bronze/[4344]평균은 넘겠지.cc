#include <bits/stdc++.h>
using namespace std;

#define FAST_IO cin.tie(nullptr)->sync_with_stdio(false)
#define endl '\n'
#define vt vector

int32_t main() {
  FAST_IO;
  int C;
  cin >> C;
  while (C--) {
    int N;
    cin >> N;
    vt<int> arr(N);
    int sum = 0;
    for (int i = 0; i < N; i++) {
      cin >> arr[i];
      sum += arr[i];
    }
    double cnt = 0, average = sum / N;
    for (auto n : arr) {
      if (average < n) cnt++;
    }
    cout << fixed;
    cout.precision(3);
    cout << round(cnt * 100 / N * 1000) / 1000 << "%" << endl;
  }
  return 0;
}
