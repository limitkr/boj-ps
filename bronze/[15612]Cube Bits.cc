#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#include <ranges>
using namespace std;

using ll = long long;
#define FAST_IO cin.tie(nullptr)->sync_with_stdio(false)
#define endl '\n'
#define vt vector

int T;
ll x;

auto main() -> int32_t {
  FAST_IO;
  cin >> T;
  while (T--) {
    vt<int> res;
    cin >> x;
    if (x == 0) res.emplace_back(0);
    while (x > 0) {
      res.emplace_back(x % 3);
      x /= 3;
    }
    for (int &re : ranges::reverse_view(res)) cout << re;
    cout << endl;
  }
  return 0;
}
