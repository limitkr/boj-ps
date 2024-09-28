/**
 * @file [B5]Metronome.cpp
 * @author limitkr
 * @version 0.1
 * @date 2024-09-28 09:15:04
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

double N;

auto main() -> int32_t {
  FAST_IO;
  cin >> N;
  cout << fixed << setprecision(2) << N / 4;
  return 0;
}
