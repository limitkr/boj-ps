/**
 * @file 라면_공식.cpp
 * @author limitkr
 * @version 0.1
 * @date 2024-08-30 20:20:28
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

int N, A, B, X;

void solve() {
  cin >> A >> B >> X;
  cout << A * (X - 1) + B << endl;
}

auto main() -> int32_t {
  FAST_IO;
  cin >> N;
  while (N--)
    solve();
  return 0;
}