#include <bits/stdc++.h>
using namespace std;

#define FAST_IO cin.tie(nullptr)->sync_with_stdio(false)
#define endl '\n'

int N, x, target;
priority_queue<int> pq;

void solve() {
    int res = 0;
    while (!pq.empty()) {
        int temp = pq.top();
        pq.pop();
        if (temp < target) break;
        else {
            target++;
            temp--;
            res++;
            pq.push(temp);
        }
    }
    cout << res << endl;
}

int main() {
    FAST_IO;
    cin >> N >> target;
    --N;
    while (N--) {
        cin >> x;
        pq.push(x);
    }
    solve();
    return EXIT_SUCCESS;
}
