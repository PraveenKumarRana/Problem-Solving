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
    int t;
    cin >> t;
    while (t--) {
        int r, b, d;
        cin >> r >> b >> d;
        int mn = min(r, b);
        int mx = max(r, b);

        bool ok = false;
        if (mx % mn == 0) {
            int k = mx / mn;
            if ((k - 1) <= d) {
                ok = true;
            }
        } else {
            int k = (mx / mn) + 1;
            if ((k - 1) <= d) {
                ok = true;
            }
        }

        if (ok)
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}