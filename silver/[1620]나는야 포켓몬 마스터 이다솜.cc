#include <bits/stdc++.h>
using namespace std;

#define FAST_IO cin.tie(nullptr)->sync_with_stdio(false)
#define endl '\n'

int N, M;
string name;
map<string, int> m1;
map<int, string> m2;

int get_index(string name) { return m1[name]; }
string get_name(int idx) { return m2[idx]; }
bool isInt(string s) { return s.find_first_not_of("0123456789") == string::npos; }

void solve() {
    while (M--) {
        cin >> name;
        if (isInt(name)) cout << get_name(stoi(name)) << endl;
        else cout << get_index(name) << endl;
    }
}

int main() {
    FAST_IO;
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        cin >> name;
        m1[name] = i + 1;
        m2[i + 1] = name;
    }
    solve();
    return EXIT_SUCCESS;
}
