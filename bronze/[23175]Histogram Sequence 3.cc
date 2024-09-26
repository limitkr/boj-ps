#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#include <bits/extc++.h>

using namespace __gnu_pbds;
using namespace std;

using ll = long long;
using ld = long double;

#define FAST_IO cin.tie(nullptr)->sync_with_stdio(false)
#define endl '\n'
#define vt vector

int N, x;

void solve() {
  int temp = 0, cnt = 0;
  while (N--) {
    cin >> x;
    cnt++;
    if (temp != x) temp = x;
    if (temp == x && cnt == x) {
      cout << x << " ";
      cnt = 0;
    }
  }
}

auto main() -> int32_t {
  FAST_IO;
  cin >> N;
  solve();
  return 0;
}
