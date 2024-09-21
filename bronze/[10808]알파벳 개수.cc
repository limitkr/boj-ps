#include <bits/stdc++.h>
#define FAST_IO cin.tie(nullptr)->sync_with_stdio(false);
using namespace std;

int arr[26];
string S;

void solve() {
    for (const char ch : S) {
        const int n = static_cast<int>(ch) - 97;
        arr[n]++;
    }
    for (int i : arr) {
        cout << i << " ";
    }
    cout << "\n";
}

int main() {
    FAST_IO;
    cin >> S;
    solve();
    return EXIT_SUCCESS;
}