// Author: Praveen Kumar Rana
// Date: 18-07-2021 (15:18:02)

#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

#define NL "\n"
#define int long long int
#define all(x) x.begin(), x.end()
const int mod = 1e12;

void solve() {
    // Write your code here.
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        map<int, int> mp;
        vector<int> ind(m);
        for (int i = 0; i < m; i++) {
            cin >> ind[i];
            ind[i]--;
        }
        for (int j = 0; j < m; j++) {
            int x;
            cin >> x;
            mp[ind[j]] = x;
        }

        vector<int> ans(n, mod);

        int mn = mod;
        for (int i = 0; i < n; i++) {
            if (mp[i]) mn = min(mn, mp[i]);
            ans[i] = min(ans[i], mn);
            mn++;
        }
        mn = mod;

        for (int i = n - 1; i >= 0; i--) {
            if (mp[i]) mn = min(mn, mp[i]);
            ans[i] = min(ans[i], mn);
            mn++;
        }

        for (auto c : ans) cout << c << " ";
        cout << NL;
    }
}

int32_t main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    solve();
    return 0;
}