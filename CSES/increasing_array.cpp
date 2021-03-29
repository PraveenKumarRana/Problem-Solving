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
    ll n;
    cin >> n;
    vi a(n);

    for (ll i = 0; i < n; i++) cin >> a[i];

    ll mx = a[0], ans = 0;
    for (ll i = 1; i < n; i++) {
        if (a[i] < mx) {
            ans += mx - a[i];
            a[i] = mx;
        } else {
            mx = a[i];
        }
    }

    cout << ans << nl;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}