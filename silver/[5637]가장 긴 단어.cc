/**
 * @file 가장_긴_단어.cpp
 * @author limitkr
 * @version 0.1
 * @date 2024-08-09 11:42:09
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

int N;

void lower(string &s) {
  for (int i = 0; i < s.size(); i++)
    s[i] = s[i] | 0x20;
}

bool vaild(char c) {
  return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || c == '-');
}

auto main() -> int32_t {
  FAST_IO;
  string res, curr;
  while (1) {
    char ch = cin.get();
    if (vaild(ch)) {
      curr += ch;
    } else {
      if (curr == "E-N-D") {
        break;
      } else {
        if (curr.length() > res.length())
          res = curr;
        curr = "";
      }
    }
  }
  lower(res);
  cout << res;
  return 0;
}