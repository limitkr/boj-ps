#include <bits/stdc++.h>
using namespace std;

#define FAST_IO cin.tie(nullptr)->sync_with_stdio(false)
#define endl '\n'

int N, M, n;
unordered_map<int, int> m;

void solve() {
    int cnt = 0;
    while (N--) {
        cin >> n;
        m[n] = 0;
    }
    while (M--) {
        cin >> n;
        if (m.contains(n)) cnt++;
    }
    cout << cnt << endl;
}

int main() {
    FAST_IO;
    while (1) {
        cin >> N >> M;
        m.clear();
        if (N == 0 && M == 0) break;
        solve();
    }
    return EXIT_SUCCESS;
}
