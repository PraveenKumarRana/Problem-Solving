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
    vector<int> v(
        {1, 11, 111, 1111, 11111, 111111, 1111111, 11111111, 111111111});
    vector<int> oddnums;
    for (int i = 0; i <= 8; i++) {
        for (int j = 1; j < 10; j++) {
            oddnums.push_back(v[i] * j);
        }
    }

    // sort(all(oddnums));
    // for (auto c : oddnums) cout << c << " ";
    // cout << "\n";

    while (t--) {
        int n;
        cin >> n;
        int ans = 0;
        for (auto c : oddnums) {
            ans += (c <= n);
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