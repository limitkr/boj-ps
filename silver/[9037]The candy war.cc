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

int T, N;
vt<int> C;

void fill_candy() {
  for (int i = 0; i < N; i++) {
    if (C[i] & 1) C[i]++;
  }
}

inline bool check() {
  int temp = C[0];
  for (int i = 1; i < N; i++) {
    if (temp != C[i]) return false;
  }
  return true;
}

void give() {
  vt<int> temp(N);
  for (int i = 0; i < N - 1; i++) {
    temp[i + 1] = C[i] / 2;
  }
  temp[0] = C[N - 1] / 2;
  for (int i = 0; i < N; i++) {
    C[i] = C[i] / 2 + temp[i];
  }
}


int solve() {
  int cnt = 0;
  fill_candy();
  while (!check()) {
    give();
    fill_candy();
    cnt++;
  }
  return cnt;
}

auto main() -> int32_t {
  FAST_IO;
  cin >> T;
  while (T--) {
    cin >> N;
    C.resize(N);
    for (int i = 0; i < N; i++) cin >> C[i];
    cout << solve() << endl;
  }
  return 0;
}
