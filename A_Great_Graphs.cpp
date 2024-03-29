// Author: Praveen Kumar Rana
// Date: 05-07-2021 (20:05:13)

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
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];

        sort(all(v));

        int ans = 0;
        for (int i = 0; i < n - 1; i++) {
            ans += (i + 1) * (n - i - 1) * (v[i] - v[i + 1]);
        }

        ans += v[n - 1];

        cout << ans << NL;
    }
}

int32_t main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    solve();
    return 0;
}