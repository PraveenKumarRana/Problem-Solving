// Author: Praveen Kumar Rana
// Date: 14-07-2021 (06:46:17)

#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

#define NL "\n"
#define int long long int
#define all(x) x.begin(), x.end()
const int mod = 1e9 + 7;

void solve() {
    // Write your code here.
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    vector<int> pre(n);
    for (int i = 0; i < n; i++) {
        pre[i] = (s[i] - 'a' + 1);
    }
    for (int i = 1; i < n; i++) {
        pre[i] += pre[i - 1];
    }

    while (q--) {
        int l, r;
        cin >> l >> r;
        l--, r--;
        int ans = pre[r];
        if (l > 0) ans -= pre[l - 1];
        cout << ans << NL;
    }
}

int32_t main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    solve();
    return 0;
}