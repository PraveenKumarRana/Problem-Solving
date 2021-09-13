// Author: Praveen Kumar Rana
// Date: 03-07-2021 (18:36:02)

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
        int o = 0, e = 0;
        for (int i = 0; i < 2 * n; i++) {
            int x;
            cin >> x;
            if (x & 1) {
                o++;
            } else {
                e++;
            }
        }

        if (o == e) {
            cout << "Yes" << NL;
        } else {
            cout << "No" << NL;
        }
    }
}

int32_t main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    solve();
    return 0;
}