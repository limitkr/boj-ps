#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define FAST_IO cin.tie(nullptr)->sync_with_stdio(false)
#define endl '\n'
#define vt vector
#define cd complex<double>

const double PI = acos(-1);
vt<ll> res;

void fft(vector<cd> &a, const bool inv) {
    int n = a.size();
    for (int i = 1, j = 0; i < n; i++) {
        int b = n >> 1;
        for (; j & b; b >>= 1)
            j ^= b;
        j ^= b;
        if (i < j) swap(a[i], a[j]);
    }
    for (int len = 2; len <= n; len <<= 1) {
        const double ang = 2 * PI / len * (inv ? -1 : 1);
        const cd wlen(cos(ang), sin(ang));
        for (int i = 0; i < n; i += len) {
            cd w(1);
            for (int j = 0; j < len / 2; j++) {
                cd u = a[i + j], v = a[i + j + len / 2] * w;
                a[i + j] = u + v;
                a[i + j + len / 2] = u - v;
                w *= wlen;
            }
        }
    }

    if (inv) {
        for (cd & x : a)
            x /= n;
    }
}

void solve(const string &a, const string &b) {
    vt<cd> fa, fb;
    for (int i = a.size() - 1; i >= 0; i--) fa.emplace_back(a[i] - '0');
    for (int i = b.size() - 1; i >= 0; i--) fb.emplace_back(b[i] - '0');

    int n = 1;
    while (n < a.size() + b.size()) n <<= 1;
    fa.resize(n);
    fb.resize(n);

    fft(fa, false);
    fft(fb, false);
    for (int i = 0; i < n; i++) fa[i] *= fb[i];
    fft(fa, true);
    for (int i = 0; i < n; i++) res.emplace_back(static_cast<ll>(round(fa[i].real())));

    int temp = 0;
    for (int i = 0; i < n; i++) {
        res[i] += temp;
        temp = res[i] / 10;
        res[i] %= 10;
    }
    for (int i = res.size() - 1; i >= 0; i--) {
        if (res[i]) {
            for (int j = i; j >= 0; j--) cout << res[j];
            break;
        }
    }
}

int32_t main() {
    FAST_IO;
    string s1, s2;
    cin >> s1 >> s2;
    if (s1 == "0" || s2 == "0") {
        cout << 0;
        return 0;
    }
    solve(s1, s2);
    return 0;
}
