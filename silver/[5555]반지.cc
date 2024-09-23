/**
 * @file 반지.cpp
 * @author limitkr
 * @version 0.1
 * @date 2024-08-22 11:26:03
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

int N;
string S, ring;

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
  cin >> S >> N;
  int cnt = 0;
  while (N--) {
    cin >> ring;
    vt<int> res = KMP::search(ring + ring, S);
    if (res.size())
      cnt++;
  }
  cout << cnt;
  return 0;
}