#include <bits/stdc++.h>
using namespace std;

#define FAST_IO cin.tie(nullptr)->sync_with_stdio(false)
#define endl '\n'
#define vt vector

int N, K;

int main() {
    FAST_IO;
    cin >> N >> K;
    vt<int> v(N);
    for (int i = 0; i < N; i++) cin >> v[i];
    ranges::sort(v.begin(), v.end());
    cout << v[K - 1] << endl;
    return EXIT_SUCCESS;
}
