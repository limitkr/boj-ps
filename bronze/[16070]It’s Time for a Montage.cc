/**
 * @file It's_Time_for_a_Montage.cpp
 * @author limitkr
 * @version 0.1
 * @date 2024-09-09 09:35:59
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

int n;
vt<int> heros, villains;

int solve() {
  if (heros[0] > villains[0]) {
    return 0;
  }
  int diff = villains[0] - heros[0];
  for (int i = 0; i < n; i++) {
    if (heros[i] + diff < villains[i])
      return diff + 1;
    if (heros[i] + diff > villains[i])
      return diff;
  }
  return diff;
}

auto main() -> int32_t {
  FAST_IO;
  cin >> n;
  heros.resize(n), villains.resize(n);
  for (int i = 0; i < n; i++)
    cin >> heros[i];
  for (int i = 0; i < n; i++)
    cin >> villains[i];
  cout << solve();
  return 0;
}