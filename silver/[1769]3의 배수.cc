#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#include <bits/extc++.h>

using namespace __gnu_pbds;
using namespace std;

using ll = long long;
using ld = long double;

#define FAST_IO cin.tie(nullptr)->sync_with_stdio(false)
#define endl '\n'
#define vt vector

string S;
int res = 0;

auto main() -> int32_t {
  FAST_IO;
  cin >> S;
  if (S.length() > 1)
    while (1) {
      int sum = 0;
      for (auto n : S) {
        sum += n - '0';
      }
      S = to_string(sum);
      res++;
      if (sum < 10) break;
    }
  cout << res << endl;
  cout << (stoi(S) % 3 == 0 ? "YES" : "NO");
  return 0;
}
