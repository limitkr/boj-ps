#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#include <bits/extc++.h>
#include <bits/stdc++.h>

using namespace __gnu_pbds;
using namespace std;

using ll = long long;
using ld = long double;

#define FAST_IO cin.tie(nullptr)->sync_with_stdio(false)
#define endl '\n'
#define vt vector

int N, res = 0;
string S;

void solve() {
  vt<int> v(2, 0);
  int k = 0;
  for (auto ch : S) {
    if (ch == '.') {
      k++;
    } else {
      v[k]++;
    }
    if (k == 2)
      return;
  }
  if (v[0] > 0 && v[0] <= 8 && v[1] <= 3 && v[1] > 0 && k == 1)
    res++;
}

auto main() -> int32_t {
  FAST_IO;
  cin >> N;
  while (N--) {
    cin >> S;
    solve();
  }
  cout << res;
  return 0;
}