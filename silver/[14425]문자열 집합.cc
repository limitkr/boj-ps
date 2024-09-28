#include <bits/stdc++.h>
using namespace std;

#define FAST_IO cin.tie(nullptr)->sync_with_stdio(false)
#define endl '\n'

int N, M;
map<string, int> m;
string S;

void solve() {
    int cnt = 0;
    while (M--) {
        cin >> S;
        if (m.contains(S)) cnt++;
    }
    cout << cnt << endl;
}

int main() {
    FAST_IO;
    cin >> N >> M;
    while (N--) {
        cin >> S;
        m[S] = 1;
    }
    solve();
    return EXIT_SUCCESS;
}
