#include <bits/stdc++.h>
#define FAST_IO cin.tie(nullptr)->sync_with_stdio(false);
#define vec vector
using namespace std;

map<int, int> diff;
int T, arr[2];
string S, base;

void save() {
    for (int i = 0; i < base.length(); i++) {
        if (S[i] != base[i] && !diff.contains(i)) diff[i] = 0;
    }
}

void solve() {
    int cnt = 0;
    for (const char ch : S) {
        cout << (diff.contains(cnt) ? '?' : ch);
        cnt++;
    }
    cout << "\n";
}

int main() {
    FAST_IO;
    cin >> T;
    cin >> base;

    if (T == 1) {
        cout << base << "\n";
        return EXIT_SUCCESS;
    }

    T -= 1;
    while (T--) {
        cin >> S;
        save();
    }
    solve();
    return EXIT_SUCCESS;
}