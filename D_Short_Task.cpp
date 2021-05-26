#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

#define nl "\n"
#define vi vector<ll>
#define pi pair<ll, ll>
#define ll long long int
#define all(x) x.begin(), x.end()

map<ll, ll> mp;
ll power(ll a, ll b) {
    ll res = 1;
    for (ll i = 0; i < b; i++) {
        res *= a;
    }
    return res;
}

void sum_of_div(ll n) {
    ll v = n;
    map<ll, ll> cnt;
    for (ll i = 2; (i * i) <= n; i++) {
        if (n % i == 0) {
            while (n % i == 0) {
                cnt[i]++;
                n /= i;
            }
        }
    }
    if (n > 1) {
        cnt[n]++;
    }

    ll sum = 1;
    for (auto c : cnt) {
        sum *= (power(c.first, c.second + 1) - 1) / (c.first - 1);
    }
    if (mp[sum] == 0) {
        mp[sum] = v;
    }
}

void Solve() {
    // Your code goes here.

    for (ll i = 1; i <= 1000; i++) {
        sum_of_div(i);
    }

    ll t;
    cin >> t;
    while (t--) {
        ll x;
        cin >> x;
        if (mp[x] == 0)
            cout << -1 << nl;
        else
            cout << mp[x] << nl;
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}