/**
 * @file 이번학기_평점은_몇점.cpp
 * @author limitkr
 * @version 0.1
 * @date 2024-08-21 10:03:28
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

int N, a;
double sum = 0.0;
string x, b;
int base[4] = {4, 3, 2, 1};

void solve() {}

auto main() -> int32_t {
  FAST_IO;
  cin >> N;
  double sum = 0.0;
  double total = 0.0;
  while (N--) {
    cin >> x >> a >> b;
    double temp = 0;
    if (b != "F") {
      temp = static_cast<double>(base[b[0] - 'A']);
      if (b[1] == '+')
        temp += 0.3;
      else if (b[1] == '-')
        temp -= 0.3;
    }
    sum += temp * a;
    total += a;
  }

  cout << fixed;
  cout.precision(2);
  double res = round(100 * (sum / total)) / 100.0;
  cout << res;
  return 0;
}