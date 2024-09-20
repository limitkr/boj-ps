/**
 * @file [B3]내_학점을_구해줘.cpp
 * @author limitkr
 * @version 0.1
 * @date 2024-09-20 12:22:52
 */
#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ld = long double;

#define FAST_IO cin.tie(nullptr)->sync_with_stdio(false)
#define endl '\n'
#define vt vector
#define ar array

int T;

auto main() -> int32_t {
  FAST_IO;
  cin >> T;
  while (T--) {
    int N;
    cin >> N;
    int sum = 0; double gpa = 0;
    while (N--) {
      int C;
      double G;
      cin >> C >> G;
      sum += C;
      gpa += C * G;
    }
    cout << fixed << setprecision(1) << sum << ' ' << gpa / sum << endl;
  }
  return 0;
}
