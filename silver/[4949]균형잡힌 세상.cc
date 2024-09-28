#include <bits/stdc++.h>
#define FAST_IO cin.tie(nullptr)->sync_with_stdio(false);
#define endl "\n";

using namespace std;

string S;

bool solve() {
    stack<char> st;
    for (const char &ch : S) {
        switch (ch) {
            case '(':
            case '[':
                st.push(ch);
                break;
            case ')':
            case ']':
                if (st.empty()) return false;
                if ((st.top() == '(' && ch == ')') || (st.top() == '[' && ch == ']')) {
                    st.pop();
                } else {
                    return false;
                }
        default:
            break;
        }
    }
    if (!st.empty()) return false;
    return true;
}

int main() {
    FAST_IO;
    while (getline(cin, S)) {
        if (S == ".") break;
        if (solve()) {cout << "yes" << endl;}
        else cout << "no" << endl;
    }
    return EXIT_SUCCESS;
}