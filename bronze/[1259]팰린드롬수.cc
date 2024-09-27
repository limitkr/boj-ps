#include <bits/stdc++.h>
using namespace std;

string S;

void solve() {
    string cmp = S;
    ranges::reverse(cmp.begin(), cmp.end());
    if (S == cmp) cout << "yes" << "\n";
    else cout << "no" << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    while (true) {
       cin >> S;
       if (S == "0") break;
       solve();
    }
    return EXIT_SUCCESS;
}
