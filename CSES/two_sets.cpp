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
    ll sum = n * (n + 1) / 2;
    if (sum % 2 == 0) {
        vector<ll> used(n + 1, 0);
        sum /= 2;
        for (ll i = n; i >= 1; i--) {
            if (sum >= i) {
                used[i] = 1;
                sum -= i;
            }
        }

        if (sum == 0) {
            cout << "YES" << nl;
            for (ll i = 1; i <= n; i++)
                if (used[i]) cout << i << " ";
            cout << nl;
            for (ll i = 1; i <= n; i++)
                if (!used[i]) cout << i << " ";
            cout << nl;
        } else {
            cout << "NO" << nl;
        }
    } else {
        cout << "NO" << nl;
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}