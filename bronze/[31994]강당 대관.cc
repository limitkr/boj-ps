#include <bits/stdc++.h>
using namespace std;

#define FAST_IO cin.tie(nullptr)->sync_with_stdio(false)
#define endl '\n'

auto main() -> int32_t {
  FAST_IO;
  int T = 7;
  string res;
  int temp = 0;
  while (T--) {
    string S; int n;
    cin >> S >> n;
    if (temp < n) {
      temp = n;
      res = S;
    }
  }
  cout << res;
  return 0;
}
