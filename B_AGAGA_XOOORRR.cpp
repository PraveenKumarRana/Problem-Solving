#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

#define ll long long int

int main() {
    std::ios_base::sync_with_stdio(false);
    // Your code goes here.

    ll tt;
    cin >> tt;
    while (tt--) {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++) cin >> a[i];

        vector<ll> pre(n), suf(n);
        for (ll i = 0; i < n; i++) {
            pre[i] = a[i];
            suf[i] = a[i];
        }

        for (ll i = 1; i < n; i++) {
            pre[i] ^= pre[i - 1];
        }

        for (ll i = n - 2; i >= 0; i--) {
            suf[i] ^= suf[i + 1];
        }

        bool ok = false;
        for (ll i = 0; i < n; i++) {
            ll mn = a[i], mx = a[i];
            for (ll j = i + 1; j < n; j++) {
                mn = min(a[j], mn);
                mx = min(a[j], mx);
                if (pre[i] == suf[j] && mn == mx && pre[i] == mn) {
                    ok = true;
                }
            }
        }

        if (ok) {
            cout << "YES"
                 << "\n";
        } else {
            cout << "NO"
                 << "\n";
        }
    }

    return 0;
}