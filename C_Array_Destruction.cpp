// Author: Praveen Kumar Rana
// Date: 28-08-2021 (17:11:20)

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

        vector<pair<int, int>> ans;

        for (int i = 0; i < (n - 1); i++) {
            ans.clear();
            int x = v[i] + v[n - 1];
            bool ok = true;
            multiset<int> mst;
            map<int, int> mp;
            for (auto c : v) {
                mst.insert(c);
                mp[c]++;
            }
            mst.erase(v[i]), mst.erase(v[n - 1]);
            x = max(v[i], v[n - 1]);
            mp[v[i]]--, v[n - 1]--;
            ans.push_back({v[i], v[n - 1]});
            while (!mst.empty()) {
                multiset<int>::iterator it = mst.end();
                it--;
                int y = *it;
                mst.erase(y);
                int p = x - y;
                if (mp[p] > 0) {
                    ans.push_back({y, p});
                    x = max(y, p);
                    mp[p]--;
                    mst.erase(p);
                } else {
                    ok = false;
                    ans.clear();
                    break;
                }
            }

            if (ok == true && mst.empty()) {
                break;
            } else {
                ans.clear();
            }
        }

        if (ans.size()) {
            cout << "YES" << NL;
            cout << ans[0].first + ans[0].second << NL;
            for (auto c : ans) cout << c.first << " " << c.second << NL;
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