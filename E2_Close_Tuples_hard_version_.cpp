#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

#define ll long long int
const ll mod = 1e9 + 7;

// Modular Exponentiation with mod
ll binexp(ll a, ll b) {
    if (b == 0) {
        return 1;
    }
    ll res = binexp(a, b / 2);
    if (b & 1) {
        return ((res % mod * res % mod) % mod * a % mod) % mod;
    } else {
        return (res % mod * res % mod) % mod;
    }
}

// Calculate factorial series with mod.
void factorial(vector<ll>& f, ll n) {
    f[0] = 1;
    for (ll i = 1; i <= n; i++) {
        f[i] = (f[i - 1] * i) % mod;
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    // Your code goes here.

    int tt;
    cin >> tt;

    vector<ll> f(200005);
    factorial(f, 200005);

    while (tt--) {
        ll n, m, k;
        cin >> n >> m >> k;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++) cin >> a[i];

        sort(a.begin(), a.end());

        ll ans = 0;
        for (ll i = 0; i < n; i++) {
            ll s = upper_bound(a.begin() + i, a.end(), a[i] + k) - a.begin();
            s--;

            ll dif = s - i;
            if (dif >= m) {
                ans +=
                    (f[dif] * binexp((f[dif - m] * f[m]) % mod, mod - 2)) % mod;
                ans %= mod;
            }
        }

        cout << ans << "\n";
    }
    return 0;
}