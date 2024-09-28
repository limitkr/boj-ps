#include <bits/stdc++.h>
using namespace std;

#define FAST_IO cin.tie(nullptr)->sync_with_stdio(false)
#define endl '\n'

int T;

void solve(int n, int m, int k) {
  int a = n, b = m, c = 0, d = 0, cnt = 0;
  if (k == 1 && m == 1 && n > 1) {
    cout << -1 << endl;
    return;
  }
  while (c < n) {
    int x = min(k * m, a), y = m;
    a -= x, b -= y, c += x, d += y;
    cnt++;
    if (c >= n) break;

    int z = 1, w = m;
    a += z, b += w, c -= z, d -= w;
    cnt++;
  }
  cout << cnt << endl;
}

int main() {
  FAST_IO;
  cin >> T;
  while (T--) {
    int N, M, K;
    cin >> N >> M >> K;
    solve(N, M, K);
  }
  return 0;
}
