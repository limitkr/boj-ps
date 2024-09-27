#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
using namespace std;

#define FAST_IO cin.tie(nullptr)->sync_with_stdio(false)

int N;

auto main() -> int32_t {
  FAST_IO;
  cin >> N;
  while (1) {
    cout << "? 1" << endl;
    char x;
    cin >> x;
    if (x == 'Y') {
      cout << "! 1" << endl;
      break;
    }
  }
  return 0;
}