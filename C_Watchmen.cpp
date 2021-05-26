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
    map<ll, ll> mx, my;
    map<pair<ll, ll>, ll> mp;
    for (ll i = 0; i < n; i++) {
        ll u, v;
        cin >> u >> v;
        mx[u]++;
        my[v]++;
        mp[{u, v}]++;
    }

    ll ans = 0;
    for (auto c : mx) {
        ans += (c.second * (c.second - 1)) / 2;
    }
    for (auto c : my) {
        ans += (c.second * (c.second - 1)) / 2;
    }
    for (auto c : mp) {
        ans -= (c.second * (c.second - 1)) / 2;
    }

    cout << ans << nl;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}