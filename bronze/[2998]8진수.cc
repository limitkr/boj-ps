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
#define ar array

string S;
ar<int, 3> arr = {4, 2, 1};

auto main() -> int32_t {
  FAST_IO;
  cin >> S;
  while (S.length() % 3 != 0) S.insert(0, 1, '0');
  int cnt = 0, res = 0;
  for (auto c : S) {
    res += (c - '0') * arr[cnt];
    cnt++;
    if (cnt == 3) {
      cout << res;
      cnt = 0;
      res = 0;
    }
  }
  return 0;
}
