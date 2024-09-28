/**
 * @file [S4]가로수.cpp
 * @author limitkr
 * @version 0.1
 * @date 2024-09-19 09:31:40
 */
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
#define ar array

using uint = unsigned int;

// Binary GCD Algorithm
// https://en.wikipedia.org/wiki/Binary_GCD_algorithm
uint gcd(uint u, uint v) {
  if (u == 0)
    return v;
  if (v == 0)
    return u;
  const int uz = __builtin_ctz(u);
  const int vz = __builtin_ctz(v);
  const int shift = uz > vz ? vz : uz;
  u >>= uz;
  do {
    v >>= uz;
    int diff = v;
    diff -= u;
    if (!diff)
      break;
    if (v < u)
      u = v;
    v = abs(diff);
  } while (1);
  return u << shift;
}

int N;
vt<int> v;

auto main() -> int32_t {
  FAST_IO;
  cin >> N;
  int base;
  cin >> base;
  for (int i = 0; i < N - 1; i++) {
    int x;
    cin >> x;
    v.emplace_back(x - base);
    base = x;
  }

  int g = v[0];
  for (int i = 1; i < N - 1; i++) {
    g = gcd(g, v[i]);
  }

  int res = 0;
  for (int i = 0; i < N - 1; i++) {
    res += v[i] / g - 1;
  }
  cout << res;
  return 0;
}