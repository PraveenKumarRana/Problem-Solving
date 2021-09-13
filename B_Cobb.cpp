// Author: Praveen Kumar Rana
// Date: 29-07-2021 (20:24:53)

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
        int n, k;
        cin >> n >> k;
        vector<pair<int, int>> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i].first;
            v[i].second = i + 1;
        }

        int ans = v[0].second * v[1].second - k * (v[0].first | v[1].first);

        for (int i = 1; i < n; i++) {
            int val = v[i].second * v[i - 1].second -
                      k * (v[i].first | v[i - 1].first);
            ans = max(ans, val);
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