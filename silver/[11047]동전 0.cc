#include <bits/stdc++.h>
using namespace std;

#define FAST_IO cin.tie(nullptr)->sync_with_stdio(false)
#define endl '\n'
#define vt vector

int N, K;

void solve(vt<int> &coins) {
    int cnt = 0;
    while (N--) {
        int curr = coins[N];
        while (curr <= K) {
            K -= curr;
            cnt++;
        }
        if (K == 0) break;
    }
    cout << cnt << endl;
}

int main() {
    FAST_IO;
    cin >> N >> K;
    vt<int> arr(N);
    for (int i = 0; i < N; i++) cin >> arr[i];
    solve(arr);
    return EXIT_SUCCESS;
}
