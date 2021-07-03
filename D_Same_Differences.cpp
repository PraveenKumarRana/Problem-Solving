// Author: Praveen Kumar Rana
// Date: 2021-07-03 08:53:21

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

        for (int i = 0; i < n; i++) {
            cin >> v[i];
            v[i] -= (i + 1);
        }

        map<int, int> mp;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            ans += mp[v[i]];
            mp[v[i]]++;
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