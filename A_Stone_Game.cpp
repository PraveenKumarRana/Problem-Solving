#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    // Your code goes here.

    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int mn = min_element(a.begin(), a.end()) - a.begin();
        int mx = max_element(a.begin(), a.end()) - a.begin();

        int ans = 1001;

        if (mn < mx) {
            ans = min(ans, mx + 1);
            ans = min(ans, n - mn);
        } else {
            ans = min(mn + 1, ans);
            ans = min(ans, n - mx);
        }

        ans = min(ans, n - (abs(mn - mx) - 1));

        cout << ans << "\n";
    }

    return 0;
}