// Author: Praveen Kumar Rana
// Date: 15-07-2021 (06:55:43)

#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

#define NL "\n"
#define int long long int
#define all(x) x.begin(), x.end()
const int mod = 1e9 + 7;

void solve() {
    // Write your code here.
    int t;
    cin >> t;
    while (t--) {
        int n, k1, k2;
        cin >> n >> k1 >> k2;
        int w, b;
        cin >> w >> b;

        int wp = 0, bp = 0;
        wp = min(k1, k2) + abs(k2 - k1) / 2;
        bp = min(n - k1, n - k2) + abs((n - k1) - (n - k2)) / 2;

        if (wp >= w && bp >= b) {
            cout << "YES" << NL;
        } else {
            cout << "NO" << NL;
        }
    }
}

int32_t main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    solve();
    return 0;
}