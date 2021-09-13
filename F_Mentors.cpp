// Author: Praveen Kumar Rana
// Date: 19-07-2021 (21:11:56)

#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

#define NL "\n"
#define int long long int
#define all(x) x.begin(), x.end()
const int mod = 1e9 + 7;

void solve() {
    // Write your code here.
    int n, k;
    cin >> n >> k;
    vector<int> v(n), orig(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        orig[i] = v[i];
    }

    vector<int> adj[n];
    for (int i = 0; i < k; i++) {
        int a, b;
        cin >> a >> b;
        a--, b--;

        adj[a].push_back(v[b]);
        adj[b].push_back(v[a]);
    }

    sort(all(v));
    for (int i = 0; i < n; i++) sort(all(adj[i]));

    for (int i = 0; i < n; i++) {
        int x = orig[i];
        int cnt = lower_bound(all(v), x) - v.begin() - 1;
        int cnt2 = lower_bound(all(adj[i]), x) - adj[i].begin() - 1;
        cout << cnt - cnt2 << " ";
    }
    cout << NL;
}

int32_t main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    solve();
    return 0;
}