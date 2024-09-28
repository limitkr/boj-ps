#include <bits/stdc++.h>
using namespace std;

#define FAST_IO cin.tie(nullptr)->sync_with_stdio(false)
#define endl '\n'
#define vt vector

int N;

void solve(vt<int> &v) {
    int res = 0;
    for (int i = 1; i <= N; i++) {
        res += reduce(v.begin(), v.begin() + i);
    }
    cout << res << endl;
}

int main() {
    FAST_IO;
    cin >> N;
    vt<int> arr(N);
    for (int i = 0; i < N; i++) cin >> arr[i];
    ranges::sort(arr.begin(), arr.end());
    solve(arr);
    return EXIT_SUCCESS;
}
