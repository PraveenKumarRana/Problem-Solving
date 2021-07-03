#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

#define ll long long int

int main() {
    std::ios_base::sync_with_stdio(false);
    // Your code goes here.

    int tt;
    cin >> tt;
    while (tt--) {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++) cin >> a[i];

        sort(a.begin(), a.end());

        ll ans = 0;
        for (ll i = 0; i < n; i++) {
            ll s = upper_bound(a.begin() + i, a.end(), a[i] + 2) - a.begin();
            s--;

            ll dif = s - i;
            ans += (dif * (dif - 1)) / 2;
        }

        cout << ans << "\n";
    }
    return 0;
}