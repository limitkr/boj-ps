#include <bits/stdc++.h>
#define FAST_IO cin.tie(nullptr)->sync_with_stdio(false)
#define endl '\n'
#define vec vector
#define SIDE 8

using namespace std;

int N, M;

void solve(vec<string> &v) {
    vec<int> res;
    for (int h = 0; h < N - SIDE + 1; h++) {
        for (int w = 0; w < M - SIDE + 1; w++) {
            int cnt_w = 0;
            int cnt_b = 0;
            for (int i = h; i < h + SIDE; i++) {
                for (int j = w; j < w + SIDE; j++) {
                    if ((i + j) % 2 == 0) {
                        if (v[i][j] != 'W') cnt_w++;
                        else cnt_b++;
                    }
                    else {
                        if (v[i][j] != 'W') cnt_b++;
                        else cnt_w++;
                    }
                }
            }
            res.push_back(cnt_w);
            res.push_back(cnt_b);
        }
    }
    ranges::sort(res.begin(), res.end());
    cout << res[0] << endl;
}

int main() {
    FAST_IO;
    cin >> N >> M;
    vec<string> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    solve(arr);
    return EXIT_SUCCESS;
}
