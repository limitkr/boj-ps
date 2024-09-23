#include <bits/stdc++.h>
using namespace std;

#define FAST_IO cin.tie(nullptr)->sync_with_stdio(false)
#define endl '\n'
#define vt vector

int N;
queue<int> q;

void solve() {
    while (1) {
        cout << q.front();
        q.pop();
        if (q.empty()) break;
        cout << " ";
        q.push(q.front());
        q.pop();
    }
}

int main() {
    FAST_IO;
    cin >> N;
    for (int i = 1; i <= N; i++) q.push(i);
    solve();
    return EXIT_SUCCESS;
}
