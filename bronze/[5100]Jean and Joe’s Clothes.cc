/**
 * @file Jean_and_Joe_s_Clothes.cpp
 * @author limitkr
 * @version 0.1
 * @date 2024-08-31 12:10:59
 */
#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#include <bits/extc++.h>

using namespace std;

using ll = long long;
using ld = long double;

#define FAST_IO cin.tie(nullptr)->sync_with_stdio(false)
#define endl '\n'
#define vt vector
#define ar array

int N;

auto main() -> int32_t {
  FAST_IO;
  while (cin >> N) {
    if (N == 0)
      break;
    string x;
    int joe = 0, jean = 0, jane = 0, james = 0, none = 0;
    while (N--) {
      cin >> x;
      if (x == "M" || x == "L")
        joe++;
      else if (x == "X")
        none++;
      else if (x == "S")
        james++;
      else if (stoi(x) >= 12)
        jean++;
      else if (stoi(x) < 12)
        jane++;
    }
    cout << joe << " " << jean << " " << jane << " " << james << " " << none
         << endl;
  }
  return 0;
}