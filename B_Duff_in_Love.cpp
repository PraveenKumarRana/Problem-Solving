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
    set<ll> st;
    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            st.insert(i);
            while (n % i == 0 && n > 0) {
                n /= i;
            }
        }
    }
    if (n > 0) {
        st.insert(n);
    }

    ll ans = 1;
    for (auto c : st) ans *= c;
    cout << ans << nl;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}