// Author: Praveen Kumar Rana
// Date: 20-07-2021 (05:39:03)

#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

#define NL "\n"
#define int long long int
#define all(x) x.begin(), x.end()
const int mod = 1e9 + 7;

int find(pair<int, int> pre, pair<int, int> curr) {
    int lx = max(pre.first, pre.second);
    int rx = min(curr.first, curr.second);

    return (rx >= lx) ? rx - lx + 1 : 0;
}

void solve() {
    // Write your code here.
    int n;
    cin >> n;
    map<pair<int, int>, int> mp;
    vector<pair<int, int>> v;
    v.push_back({0, 0});
    mp[{0, 0}] = 1;

    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        if (mp[{x, y}]) {
            continue;
        } else {
            v.push_back({x, y});
            mp[{x, y}] = 1;
        }
    }

    int ans = 0;
    if (v.size() == 1) {
        ans = 1;
    } else {
        for (int i = 1; i < v.size(); i++) {
            ans += min(v[i].first, v[i].second) -
                   max(v[i - 1].first, v[i - 1].second) + 1;
            if (i == 1) continue;
            ans -= (v[i - 1].first == v[i - 1].second);
        }
    }

    cout << ans << NL;
}

int32_t main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    solve();
    return 0;
}