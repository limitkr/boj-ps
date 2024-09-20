#include <bits/stdc++.h>
using namespace std;

#define FAST_IO cin.tie(nullptr)->sync_with_stdio(false)
#define endl '\n'

int N;

auto main() -> int32_t {
  FAST_IO;
  cin >> N;
  int res = 0;
  while (N--) {
    int x;
    cin >> x;
    res += x;
  }
  cout << res;
  return 0;
}
