#include <bits/stdc++.h>
using namespace std;

#define FAST_IO cin.tie(nullptr)->sync_with_stdio(false)
#define endl '\n'

int32_t main() {
  FAST_IO;
  int f, add;
  cin >> f >> add;
  int N;
  cin >> N;
  while (N--) {
    int x;
    cin >> x;
    cout << x << " ";
    if (x > 1000) cout << 1000 * f + (x - 1000) * add << endl;
    else cout << x * f << endl;
  }
  return 0;
}
