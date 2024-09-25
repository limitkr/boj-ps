#include <bits/stdc++.h>
#define FAST_IO cin.tie(nullptr)->sync_with_stdio(false);
using namespace std;

string S;

void solve() {
    for (int i = 0; i < S.length(); i++) {
        cout << S[i];
        if ((i + 1) % 10 == 0 && i != 0) cout << "\n";
    }
}

int main() {
    FAST_IO;
    cin >> S;
    solve();
    return EXIT_SUCCESS;
}