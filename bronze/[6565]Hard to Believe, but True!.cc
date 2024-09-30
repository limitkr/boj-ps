/**
 * @file [B2]Hard to Believe, but True!.cpp
 * @author limitkr
 * @version 0.1
 * @date 2024-09-30 09:04:52
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

string S;

auto main() -> int32_t {
  FAST_IO;
  while (1) {
    cin >> S;
    if (S == "0+0=0")
      break;
    string a, b, c;
    int flag = 0;
    for (int i = S.length() - 1; i >= 0; i--) {
      if (S[i] == '=') {
        flag = 1;
        continue;
      }
      if (S[i] == '+') {
        flag = 2;
        continue;
      }
      if (flag == 0) {
        c += S[i];
      } else if (flag == 1) {
        b += S[i];
      } else if (flag == 2)
        a += S[i];
    }
    int A = stoi(a), B = stoi(b), C = stoi(c);
    cout << (A + B == C ? "True" : "False") << endl;
  }
  cout << "True";
  return 0;
}