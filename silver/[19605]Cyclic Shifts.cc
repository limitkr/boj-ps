/**
 * @file Cyclic_Shifts.cpp
 * @author limitkr
 * @version 0.1
 * @date 2024-09-09 10:14:47
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

string T, S;

class KMP {
public:
  static vt<int> get_prefix(const string &s) {
    int n = static_cast<int>(s.size());
    vt<int> prefix(n);
    for (int i = 1, j = 0; i < n; i++) {
      while (j > 0 && s[i] != s[j])
        j = prefix[j - 1];
      if (s[i] == s[j])
        j++;
      prefix[i] = j;
    }
    return prefix;
  }

  static vt<int> search(const string &t, const string &p) {
    int n = static_cast<int>(p.size()), m = static_cast<int>(t.size());
    string s = p + "!" + t;
    vt<int> prefix = get_prefix(s), ans;
    for (int i = n + 1; i < n + 1 + m; i++) {
      if (prefix[i] == n) {
        ans.push_back(i - 2 * n);
      }
    }
    return ans;
  }
};

auto main() -> int32_t {
  FAST_IO;
  cin >> T >> S;
  for (int i = 0; i < S.size(); i++) {
    if (auto res = KMP::search(T, S); !res.empty()) {
      cout << "yes";
      exit(0);
    }
    S = S.substr(1, S.size() - 1) + S[0];
  }
  cout << "no";
  return 0;
}