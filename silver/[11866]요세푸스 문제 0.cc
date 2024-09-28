#include <bits/stdc++.h>
using namespace std;

int N, K;

void solve() {
    queue<int> q;
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
    cout << ">" << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> N >> K;
    solve();
    return EXIT_SUCCESS;
}
