#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

#define nl "\n"
#define vi vector<int>
#define pi pair<int, int>
#define ll long long int
#define all(x) x.begin(), x.end()

const ll mod = 1e9 + 7;

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

void Solve() {
    // Your code goes here.
    ll t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        cout << binexp(n, k) << nl;
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}