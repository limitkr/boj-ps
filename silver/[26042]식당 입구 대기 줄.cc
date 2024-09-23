#include <bits/stdc++.h>
using namespace std;

#define FAST_IO cin.tie(nullptr)->sync_with_stdio(false)
#define endl '\n'
#define WAIT 1
#define MAX_ID 100'000
int N, n, a;
queue<int> q;

void solve() {
    int m = 0, i = MAX_ID;
    while (N--) {
        cin >> n;
        if (n == WAIT) {
            cin >> a;
            q.push(a);
            if (m < q.size()) {
                m = q.size();
                i = q.back();
            }
            else if (m == q.size()) {
                if (q.back() < i) i = q.back();
            }
        }
        else {
            q.pop();
        }
    }
    cout << m << " " << i << endl;
}

int main() {
    FAST_IO;
    cin >> N;
    solve();
    return EXIT_SUCCESS;
}
