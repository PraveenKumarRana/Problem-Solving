// Author: Praveen Kumar Rana
// Date: 02-09-2021 (20:47:06)

#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

#define NL "\n"
#define int long long int
#define all(x) x.begin(), x.end()
const int mod = 1e9 + 7;

vector<int> per, ord, sum, used;
int mx = 0;

struct DSU {
    vector<int> parent, size;

    void init(int n) {
        parent.resize(2 * n + 2);
        size.resize(2 * n + 2);
        for (int i = 0; i <= 2 * n + 1; i++) {
            parent[i] = i;
            size[i] = 1;
        }
    }

    int find_set(int p) {
        if (p == parent[p]) return p;
        return find_set(parent[p]);
    }

    void insert(int i) {
        // 3 conditions goes here.
        if (!used[i - 1] && !used[i + 1]) {
            sum[i] = per[i];
            mx = max(mx, sum[i]);
        } else if (used[i - 1] && used[i + 1]) {
            int a = find_set(i - 1);
            int b = find_set(i + 1);
            sum[i] = per[i] + sum[a] + sum[b];
            parent[a] = i, parent[b] = i;
            mx = max(mx, sum[i]);
        } else if (used[i + 1]) {
            int a = find_set(i + 1);
            sum[a] = per[i] + sum[a];
            parent[i] = a;
            mx = max(mx, sum[a]);
        } else {
            int a = find_set(i - 1);
            sum[a] = per[i] + sum[a];
            parent[i] = a;
            mx = max(mx, sum[a]);
        }
    }
};

void solve() {
    // Write your code here.
    int n;
    cin >> n;
    per.resize(n + 2), ord.resize(n + 2), sum.resize(n + 2), used.resize(n + 2);
    sum.assign(n + 2, 0);
    used.assign(n + 2, 0);
    for (int i = 1; i <= n; i++) cin >> per[i];
    for (int i = n; i >= 1; i--) cin >> ord[i];

    vector<int> ans;
    DSU dsu;
    dsu.init(n + 2);

    for (int i = 1; i <= n; i++) {
        ans.push_back(mx);
        dsu.insert(ord[i]);
    }

    reverse(all(ans));
    for (auto c : ans) cout << c << NL;
}

int32_t main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    solve();
    return 0;
}