// Author: Praveen Kumar Rana
// Date: 14-07-2021 (07:03:19)

#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

#define NL "\n"
#define int long long int
#define all(x) x.begin(), x.end()
const int mod = 1e9 + 7;

void solve() {
    // Write your code here.
    int n, k, x;
    cin >> n >> k >> x;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(all(v));
    vector<int> df;
    for (int i = 1; i < n; i++) {
        if (v[i] - v[i - 1] > x) {
            df.push_back(v[i] - v[i - 1]);
        }
    }
    sort(all(df));

    int ans = df.size();
    for (int i = 0; i < df.size(); i++) {
        int cnt = (df[i] + x - 1) / x;
        cnt--;
        if (k >= cnt) {
            k -= cnt;
            ans--;
        }
    }

    cout << ans + 1 << NL;
}

int32_t main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    solve();
    return 0;
}