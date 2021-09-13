// Author: Praveen Kumar Rana
// Date: 17-07-2021 (20:18:07)

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
        int n, m;
        cin >> n >> m;
        vector<vector<int>> mat(n, vector<int>(m, 0));
        for (int i = 0; i < m; i += 2) {
            mat[0][i] = 1;
            mat[n - 1][i] = 1;
        }

        for (int j = 2; j < (n - 2); j += 2) {
            mat[j][0] = 1;
            mat[j][m - 1] = 1;
        }

        for (auto c : mat) {
            for (auto d : c) cout << d;
            cout << NL;
        }
        cout << NL;
    }
}

int32_t main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    solve();
    return 0;
}