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

string a, b;

auto main() -> int32_t {
  FAST_IO;
  cin >> a >> b;
  if (a.length() >= b.length())
    cout << "go";
  else
    cout << "no";
  return 0;
}