#include <bits/stdc++.h>
using namespace std;

#define FAST_IO cin.tie(nullptr)->sync_with_stdio(false);
#define endl "\n";

int N, K;
queue<int> q;

void solve() {
    for (int i = 1; i <= N; i++) {
        q.push(i);
    }
    cout << "<";
    while (!q.empty()) {
        if (q.size() == 1) {
            cout << q.front();
            q.pop();
            break;
        }
        for (int i = 0; i < K - 1; i++) {
            q.push(q.front());
            q.pop();
        }
        cout << q.front() << ", ";
        q.pop();
    }
    cout << ">" << endl;
}

int main() {
    FAST_IO;
    cin >> N >> K;
    solve();
    return EXIT_SUCCESS;
}