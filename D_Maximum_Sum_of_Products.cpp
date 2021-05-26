#include <algorithm>
#include <iostream>
#include <vector>
#pragma GCC optimize("Ofast")
using namespace std;

#define nl "\n"
#define vi vector<int>
#define pi pair<int, int>
#define ll long long int
#define all(x) x.begin(), x.end()

void Solve() {
    // Your code goes here.
    ll n;
    cin >> n;
    vector<ll> a(n), b(n), c(n), prefa(n), prefb(n);
    for (ll i = 0; i < n; i++) cin >> a[i];
    for (ll i = 0; i < n; i++) cin >> b[i];
    for (ll i = 0; i < n; i++) c[i] = b[i];

    reverse(all(c));
    prefa[0] = a[0] * b[0];
    prefb[0] = a[0] * c[0];

    for (int i = 1; i < n; i++) {
        prefa[i] = a[i] * b[i] + prefa[i - 1];
        prefb[i] = a[i] * c[i] + prefb[i - 1];
    }

    ll ans = 0, diff = 0;
    ans = prefa[n - 1];

    for (ll i = 0; i < n; i++) {
        for (ll j = i; j < n; j++) {
            cout << i << " : " << j << " => "
                 << (i > 0 ? prefb[j] - prefb[i - 1] : prefb[j]) << " <> "
                 << (i > 0 ? prefa[j] - prefa[i - 1] : prefa[j]) << nl;
            diff = max(diff, (i > 0 ? prefb[j] - prefb[i - 1] : prefb[j]) -
                                 (i > 0 ? prefa[j] - prefa[i - 1] : prefa[j]));
        }
    }

    cout << ans + diff << nl;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}