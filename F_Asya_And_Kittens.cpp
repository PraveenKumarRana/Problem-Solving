// Author: Praveen Kumar Rana
// Date: 20-07-2021 (06:49:16)

#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

#define NL "\n"
#define int long long int
#define all(x) x.begin(), x.end()
const int mod = 1e9 + 7;

struct DSU {
    vector<int> parent, size;

    void init(int n) {
        parent.resize(n);
        size.resize(n);
        for (int i = 0; i < n; i++) {
            parent[i] = i;
            size[i] = 1;
        }
    }

    int find_set(int p) {
        if (p == parent[p]) return p;
        return parent[p] = find_set(parent[p]);
    }

    void union_set(int a, int b) {
        a = find_set(a);
        b = find_set(b);

        if (a != b) {
            if (size[a] < size[b]) swap(a, b);
            parent[b] = a;
            size[a] += size[b];
        }
    }
};

void solve() {
    // Write your code here.
    int n;
    cin >> n;
    DSU dsu;
    dsu.init(n);

    for (int i = 0; i < n; i++) {
        int u, v;
        cin >> u >> v;
        u--, v--;
        dsu.union_set(u, v);
    }

    vector<pair<int, int>> ans(n);
    for (int i = 0; i < n; i++) {
        ans[i] = {dsu.find_set(i), i};
    }

    sort(all(ans));
    for (auto c : ans) {
        cout << c.second + 1 << " ";
    }
    cout << NL;
}

int32_t main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    solve();
    return 0;
}