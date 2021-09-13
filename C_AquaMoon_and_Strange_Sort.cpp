// Author: Praveen Kumar Rana
// Date: 21-07-2021 (21:10:46)

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
        vector<pair<int, int>> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i].first;
            v[i].second = i;
        }

        sort(all(v));
        bool ok = true;
        for (int i = 0; i < n; i++) {
            if ((abs(i - v[i].second)) & 1) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << NL;
    }
}

int32_t main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    solve();
    return 0;
}