#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
using namespace std;

#define FAST_IO cin.tie(nullptr)->sync_with_stdio(false)
#define endl '\n'

string S;

bool solve() {
  for (int i = 0; i < S.length() - 1; i++) {
    if (S[i] == S[i + 1]) return false;
  }
  return true;
}

auto main() -> int32_t {
  FAST_IO;
  cin >> S;
  cout << (solve() ? "Odd." : "Or not.");
  return 0;
}