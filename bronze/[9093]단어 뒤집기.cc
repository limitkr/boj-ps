#include <bits/stdc++.h>
#define FAST_IO cin.tie(nullptr)->sync_with_stdio(false);
#define vec vector
using namespace std;

int T;
string S;

void solve() {
    string temp;
    stringstream st(S);
    while (getline(st, temp, ' ')) {
        ranges::reverse(temp.begin(), temp.end());
        cout << temp  << " ";
    }
}

int main() {
    FAST_IO;
    cin >> T;
    for (int i = 0; i <= T; i++) {
        getline(cin, S);
        solve();
    }
    return EXIT_SUCCESS;
}