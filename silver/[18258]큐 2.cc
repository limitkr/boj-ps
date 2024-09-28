#include <bits/stdc++.h>
using namespace std;

#define FAST_IO cin.tie(nullptr)->sync_with_stdio(false);
#define endl "\n";

int N, n;
string op;
queue<int> q;

void solve(string op) {
    if (op == "push") {
        cin >> n;
        q.push(n);
        return;
    }
    else if (op == "size") cout << q.size();
    else if (op == "empty") {
        if (q.empty()) cout << 1;
        else cout << 0;
    } else {
        if ((op == "front" || op == "empty" || op == "back" || op == "pop") && !q.empty()) {
            if (op == "front") cout << q.front();
            else if (op == "back") cout << q.back();
            else if (op == "empty") cout << q.empty();
            else if (op == "pop") {
                cout << q.front();
                q.pop();
            }
        }
        else cout << -1;
    }
    cout << endl;
}

int main() {
    FAST_IO;
    cin >> N;
    while (N--) {
        cin >> op;
        solve(op);
    }
    return EXIT_SUCCESS;
}