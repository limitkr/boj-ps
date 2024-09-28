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

vt<string> correct(3), guess(3);

void solve() {
  int green = 0;
  vt<int> correct_freq(26, 0), guess_freq(26, 0);
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (correct[i][j] == guess[i][j]) green++;
      correct_freq[correct[i][j] - 'A']++;
      guess_freq[guess[i][j] - 'A']++;
    }
  }
  int yellow = 0;
  for (int i = 0; i < 26; i++) {
    yellow += min(correct_freq[i], guess_freq[i]);
  }
  yellow -= green;
  cout << green << endl;
  cout << yellow;
}

auto main() -> int32_t {
  FAST_IO;
  for (int i = 0; i < 3; i++) cin >> correct[i];
  for (int i = 0; i < 3; i++) cin >> guess[i];
  solve();
  return 0;
}
