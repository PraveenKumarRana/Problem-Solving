// Author: Praveen Kumar Rana
// Date: 20-08-2021 (21:24:06)

#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

#define NL "\n"
#define int long long int
#define all(x) x.begin(), x.end()
const int mod = 1e9 + 7;

void solve() {
    // Write your code here.
    int n;
    cin >> n;
    map<int, int> mp;
    for (int i = 1; i <= 9; i++) {
        int x;
        cin >> x;
        mp[x] = i;
    }

    vector<pair<int, int>> v;
    for (auto c : mp) {
        v.push_back({c.first, c.second});
    }
    sort(all(v));

    int d = n / v[0].first;
    int rem = n % v[0].first;
    rem = v[0].first + rem;
    int mx = -1;
    int col = 0;
    for (auto c : v) {
        if (c.first <= rem && mx < c.second) {
            mx = c.second;
            col = c.first;
        }
    }

    if (col <= n) {
        cout << mx;
        for (int i = 1; i < d; i++) cout << v[0].second;
        cout << NL;
    } else {
        cout << -1 << NL;
    }
}

int32_t main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    solve();
    return 0;
}