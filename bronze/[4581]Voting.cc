/**
 * @file Voting.cpp
 * @author limitkr
 * @version 0.1
 * @date 2024-08-29 12:17:02
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

string S;

void out(string mes) { cout << mes << endl; }

auto main() -> int32_t {
  FAST_IO;
  while (cin >> S) {
    if (S == "#")
      break;
    unordered_map<char, int> m;
    for (auto ch : S) {
      m[ch]++;
    }
    if (m['A'] >= (S.length() & 1 ? ((S.length() + 1) / 2) : S.length() / 2))
      cout << "need quorum" << endl;
    else if (m['Y'] > m['N'])
      cout << "yes" << endl;
    else if (m['Y'] < m['N'])
      cout << "no" << endl;
    else if (m['Y'] == m['N'])
      cout << "tie" << endl;
  }
  return 0;
}