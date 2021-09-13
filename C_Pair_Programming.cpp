// Author: Praveen Kumar Rana
// Date: 13-07-2021 (20:21:37)

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
        int k, n, m;
        cin >> k >> n >> m;
        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < m; i++) cin >> b[i];

        int i = 0, j = 0;
        bool ok = true;
        vector<int> ans;
        while (i < n && j < m) {
            // cout << "Inside" << NL;
            if (a[i] == 0) {
                ans.push_back(a[i++]);
                k++;
            } else if (b[j] == 0) {
                ans.push_back(b[j++]);
                k++;
            } else if (a[i] <= k) {
                ans.push_back(a[i++]);
            } else if (b[j] <= k) {
                ans.push_back(b[j++]);
            } else {
                // cout << "Inside ELSE" << NL;
                ok = false;
                break;
            }
        }

        // cout << "i & j: " << i << " " << j << NL;

        while (i < n) {
            if (a[i] == 0) {
                ans.push_back(a[i++]);
                k++;
            } else if (a[i] <= k) {
                ans.push_back(a[i++]);
            } else {
                ok = false;
                break;
            }
        }

        while (j < m) {
            if (b[j] == 0) {
                ans.push_back(b[j++]);
                k++;
            } else if (b[j] <= k) {
                ans.push_back(b[j++]);
            } else {
                ok = false;
                break;
            }
        }

        if (ok) {
            for (auto c : ans) cout << c << " ";
            cout << NL;
        } else {
            cout << -1 << NL;
        }
    }
}

int32_t main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    solve();
    return 0;
}