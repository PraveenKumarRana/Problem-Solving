// Author: Praveen Kumar Rana
// Date: 14-07-2021 (06:39:34)

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
        int n, x, t;
        cin >> n >> x >> t;
        int v = t / x;

        int ans = 0;
        if (n - v > 0) {
            ans += v * (n - v) + (v * (v - 1)) / 2;
        } else {
            ans += (n * (n - 1)) / 2;
        }
        cout << ans << NL;
    }
}

int32_t main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    solve();
    return 0;
}