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

void solve() {}

auto main() -> int32_t {
  FAST_IO;
  string S;
  while (getline(cin, S)) {
    int a = 0, b = 0, c = 0, d = 0;
    for (auto n : S) {
      if (islower(n))
        a++;
      else if (isupper(n))
        b++;
      else if (n >= '0' && n <= '9')
        c++;
      else if (n == ' ')
        d++;
    }
    cout << a << " " << b << " " << c << " " << d << endl;
  }
  return 0;
}