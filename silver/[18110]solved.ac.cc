#include <bits/stdc++.h>
#define FAST_IO cin.tie(nullptr)->sync_with_stdio(false)
#define vec vector

using namespace std;

int N;

void solve(const vec<int>& arr) {
    auto target = round(N * 0.15);
    int sum = 0;
    for (int i = target; i < N - target; i++) {
        sum += arr[i];
    }
    auto result = round(sum / (N - target * 2));
    cout << result << "\n";
}

int main() {
    FAST_IO;
    cin >> N;
    if (N == 0) {
        cout << 0 << "\n";
        return EXIT_SUCCESS;
    }
    vec<int> arr(N);

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    ranges::sort(arr.begin(), arr.end());

    solve(arr);
    return EXIT_SUCCESS;
}
