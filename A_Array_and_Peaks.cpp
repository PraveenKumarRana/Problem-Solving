// Author: Praveen Kumar Rana
// Date: 05-07-2021 (18:35:28)

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
        int n, k;
        cin >> n >> k;
        if (k <= (n - 1) / 2) {
            vector<int> a(n, 0);
            int x = n;
            for (int i = 1; i < n; i += 2) {
                if (k > 0) {
                    a[i] = x--;
                    k--;
                }
            }
            for (int i = 0; i < n; i++) {
                if (a[i] == 0) {
                    a[i] = x--;
                }
            }
            for (auto c : a) cout << c << " ";
            cout << NL;
            continue;
        }
        cout << -1 << NL;
    }
}

int32_t main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    solve();
    return 0;
}