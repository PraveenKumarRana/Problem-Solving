#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

#define nl "\n"
#define vi vector<int>
#define pi pair<int, int>
#define ll long long int
#define all(x) x.begin(), x.end()

string bin(int n) {
    string s = "";
    while (n > 0) {
        if (n & 1)
            s += '1';
        else
            s += '0';
        n /= 2;
    }

    return s;
}

void Solve() {
    // Your code goes here.
    ll n;
    cin >> n;
    vi p(n);
    for (ll i = 0; i < n; i++) cin >> p[i];

    ll ans = LLONG_MAX;

    for (ll i = 0; i <= (1 << n); i++) {
        vector<bool> used(n, false);
        ll ssum = 0, fsum = 0;

        string s = bin(i);
        for (ll j = 0; j < (ll)s.size(); j++) {
            if (s[j] == '1') {
                fsum += p[j];
                used[j] = true;
            }
        }

        for (ll j = 0; j < n; j++) {
            if (!used[j]) {
                ssum += p[j];
            }
        }

        ans = min(ans, abs(fsum - ssum));
    }

    cout << ans << nl;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}