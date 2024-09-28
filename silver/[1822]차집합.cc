#include <bits/stdc++.h>
using namespace std;

#define FAST_IO cin.tie(nullptr)->sync_with_stdio(false)
#define endl '\n'
#define vt vector

vt<int> res;

int main() {
    FAST_IO;
    int nA, nB;
    cin >> nA >> nB;
    vt<int> A(nA), B(nB);

    for (int i = 0; i < nA; i++) { cin >> A[i]; }
    for (int i = 0; i < nB; i++) { cin >> B[i]; }
    ranges::sort(A.begin(), A.end());
    ranges::sort(B.begin(), B.end());

    set_difference(A.begin(), A.end(), B.begin(), B.end(), back_inserter(res));
    cout << res.size() << endl;
    if (!res.size()) return 0;
    for (auto n : res) {
        cout << n << " ";
    }
    cout << endl;
    return 0;
}
