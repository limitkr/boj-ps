#include <bits/stdc++.h>
using namespace std;

#define FAST_IO cin.tie(nullptr)->sync_with_stdio(false);
#define endl "\n";

int N, X, op;
stack<int> st;

int main() {
    FAST_IO;
    cin >> N;
    while (N--) {
        cin >> op;
        if (op == 1) {
            cin >> X;
            st.push(X);
            continue;
        }
        else if (op == 2) {
            if (!st.empty()) {
                cout << st.top();
                st.pop();
            }
            else cout << -1;
        }
        else if (op == 3) {
            cout << st.size();
        }
        else if (op == 4) {
            if (st.empty()) cout << 1;
            else cout << 0;
        }
        else if (op == 5) {
            if (!st.empty()) cout << st.top();
            else cout << -1;
        }
        cout << endl;
    }
    return EXIT_SUCCESS;
}