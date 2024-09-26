#include <bits/stdc++.h>
#define FAST_IO cin.tie(nullptr)->sync_with_stdio(false);
#define ll long long

using namespace std;

const int M = 1234567891;
int L;
string S;

int cv(char ch) {
    return ch - 'a' + 1;
}

int solve() {
    ll h = 0, r = 1;
    for (int i = 0; i < L; i++) {
        h = (h + cv(S[i]) * r) % M;
        r = r * 31 % M;
    }
    return h;
}

int main()
{
    FAST_IO;
    cin >> L >> S;
    cout << solve();

    return EXIT_SUCCESS;
}
