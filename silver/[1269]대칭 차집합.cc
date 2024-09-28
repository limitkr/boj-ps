#include <bits/stdc++.h>
using namespace std;

#define FAST_IO cin.tie(nullptr)->sync_with_stdio(false)
#define endl '\n'
#define vt vector

int An, Bn;

void solve(vt<int> &A, vt<int> &B) {
    vt<int> res;
    set_symmetric_difference(A.begin(), A.end(), B.begin(), B.end(), back_inserter(res));
    cout << res.size() << endl;
}

int main() {
    FAST_IO;
    cin >> An >> Bn;
    vt<int> A(An), B(Bn);
    for (int i = 0; i < An; i++) cin >> A[i];
    for (int i = 0; i < Bn; i++) cin >> B[i];
    ranges::sort(A.begin(), A.end());
    ranges::sort(B.begin(), B.end());
    solve(A, B);
    return EXIT_SUCCESS;
}
