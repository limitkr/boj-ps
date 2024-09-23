#include <bits/stdc++.h>
#define FAST_IO cin.tie(nullptr)->sync_with_stdio(false);
#define endl "\n";

using namespace std;

int N, start = 666;

void solve() {
    while (N != 0) {
        if (to_string(start).find("666") != string::npos) {
            N--;
        }
        if (N == 0) break;
        start += 1;
    }
    cout << start;
}

int main() {
    FAST_IO;
    cin >> N;
    solve();
    return EXIT_SUCCESS;
}