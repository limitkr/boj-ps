#include <bits/stdc++.h>
using namespace std;

#define FAST_IO cin.tie(nullptr)->sync_with_stdio(false)
#define endl '\n'

int N, M;
string site, pw;

int main() {
    FAST_IO;
    cin >> N >> M;
    map<string, string> m;
    while (N--) {
        cin >> site >> pw;
        m[site] = pw;
    }
    while (M--) {
        cin >> site;
        cout << m[site] << endl;
    }
    return EXIT_SUCCESS;
}
