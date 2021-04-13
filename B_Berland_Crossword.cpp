#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

#define nl "\n"
#define vi vector<int>
#define pi pair<int, int>
#define ll long long int
#define all(x) x.begin(), x.end()

void Solve() {
    // Your code goes here.
    int tt;
    cin >> tt;
    while (tt--) {
        int n, u, r, d, l;
        cin >> n >> u >> r >> d >> l;

        if (u > (n - 2)) {
            u--;
            bool ok = false;
            if (l >= 1) {
                l--;
                ok = true;
            } else
                r--;
            for (int i = 2; i < n; i++) {
                if (u > 0) {
                    u--;
                }
            }
            if (u > 0) {
                u--;
                if (ok)
                    r--;
                else
                    l--;
            }

        } else {
            u = 0;
        }

        if (d > (n - 2)) {
            d--;
            bool ok = false;
            if (l >= 1) {
                l--;
                ok = true;
            } else
                r--;
            for (int i = 2; i < n; i++) {
                if (d > 0) {
                    d--;
                }
            }
            if (d > 0) {
                d--;
                if (ok)
                    r--;
                else
                    l--;
            }
        } else {
            d = 0;
        }

        if (l > (n - 2)) {
            l--;
            bool ok = false;
            if (d >= 1) {
                d--;
                ok = true;
            } else
                u--;
            for (int i = 2; i < n; i++) {
                if (l > 0) {
                    l--;
                }
            }

            if (l > 0) {
                l--;
                if (ok)
                    u--;
                else
                    d--;
            }

        } else {
            l = 0;
        }

        if (r > (n - 2)) {
            r--;
            bool ok = false;
            if (d >= 1) {
                d--;
                ok = true;
            } else
                u--;
            for (int i = 2; i < n; i++) {
                if (r > 0) {
                    r--;
                }
            }

            if (r > 0) {
                r--;
                if (ok)
                    u--;
                else
                    d--;
            }
        } else {
            r = 0;
        }

        if (u == 0 && d == 0 && l == 0 && r == 0) {
            cout << "YES" << nl;
        } else {
            cout << "NO" << nl;
        }
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}