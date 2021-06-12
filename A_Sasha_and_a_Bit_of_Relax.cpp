#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    // Your code goes here.

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    vector<int> pre(n);
    pre[0] = a[0];

    for (int i = 1; i < n; i++) {
        pre[i] = pre[i - 1] ^ a[i];
    }

    vector<vector<int>> dp(2, vector<int>(1 << 21));
    dp[1][0] = 1;

    long long ans = 0;

    for (int i = 0; i < n; i++) {
        ans += dp[i % 2][pre[i]];
        dp[i % 2][pre[i]]++;
    }

    cout << ans << "\n";

    return 0;
}