#include <bits/stdc++.h>
#define FAST_IO cin.tie(nullptr)->sync_with_stdio(false);
using namespace std;

int T, arr[2];
string S;

void solve() {
    string temp;
    stringstream st(S);
    int i = 0;
    while (getline(st, temp, ',')) {
        arr[i] = stoi(temp);
        i++;
    }
    cout << arr[0] + arr[1] << "\n";
}

int main() {
    FAST_IO;
    cin >> T;
    while (T--) {
        cin >> S;
        solve();
    }
    return EXIT_SUCCESS;
}