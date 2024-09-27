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

vt<int> v(8);

auto main() -> int32_t {
  FAST_IO;
  for (int i = 0; i < 8; i++) cin >> v[i];
  int r3 = v[7] - v[6];
  int r2 = v[5] - v[4] + r3;
  int r1 = v[3] - v[2] + r2;
  cout << r1 << endl;
  cout << r2 << endl;
  cout << r3 << endl;
  return 0;
}
