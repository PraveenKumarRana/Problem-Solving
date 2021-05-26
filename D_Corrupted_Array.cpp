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
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vi b(n + 2);
        for (ll i = 0; i < (n + 2); i++) cin >> b[i];

        sort(all(b));
        ll sum = 0;
        for (ll i = 0; i < n; i++) {
            sum += b[i];
        }

        if (sum == b[n]) {
            for (ll i = 0; i < n; i++) cout << b[i] << " ";
            cout << nl;
        } else {
            sum = 0;
            for (ll i = 0; i <= n; i++) {
                sum += b[i];
            }
            ll ind = -1;
            for (ll i = 0; i <= n; i++) {
                if ((sum - b[i]) == b[n + 1]) {
                    ind = i;
                    break;
                }
            }

            if (ind >= 0) {
                for (ll i = 0; i <= n; i++) {
                    if (ind != i) {
                        cout << b[i] << " ";
                    }
                }
                cout << nl;
            } else {
                cout << -1 << nl;
            }
        }
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}