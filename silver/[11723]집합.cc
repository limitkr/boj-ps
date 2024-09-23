#include <bits/stdc++.h>
using namespace std;

#define FAST_IO cin.tie(nullptr)->sync_with_stdio(false)
#define endl '\n'
#define vt vector

int M, num;
map<int, int> m;
string command;

void init(int n) { for (int i = 1; i <= 20; ++i) { m[i] = n; } }

void solve(string cmd, int x) {
    if (cmd == "add") { m[x] = 1; }
    else if (cmd == "remove") { m[x] = 0; }
    else if (cmd == "check") { cout << m[x] << endl; }
    else if (cmd == "toggle") { m[x] = 1 - m[x]; }
}

int main() {
    FAST_IO;
    init(0);
    cin >> M;
    while (M--) {
        cin >> command;
        if (command == "all") init(1);
        else if (command == "empty") init(0);
        else cin >> num;
        solve(command, num);
    }
    return EXIT_SUCCESS;
}
