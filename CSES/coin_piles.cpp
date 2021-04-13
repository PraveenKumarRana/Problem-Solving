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
    ll tt;
    cin >> tt;
    while (tt--) {
        ll a, b;
        cin >> a >> b;

        if ((2 * a - b) % 3 == 0 && (2 * a - b) >= 0 && (2 * b - a) % 3 == 0 &&
            (a + b) % 3 == 0 && (2 * b - a) >= 0) {
            cout << "YES" << nl;
        } else {
            cout << "NO" << nl;
        }
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}