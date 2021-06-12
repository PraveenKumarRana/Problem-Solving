#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    // Your code goes here.

    long long n, m, ta, tb, k;
    cin >> n >> m >> ta >> tb >> k;
    vector<long long> a(n), b(m);
    for (long long i = 0; i < n; i++) {
        cin >> a[i];
        a[i] += ta;
    }
    for (long long i = 0; i < m; i++) {
        cin >> b[i];
    }

    if (k >= min(n, m)) {
        cout << -1 << "\n";
        return 0;
    }

    long long mx = 0;
    long long ans = LLONG_MIN;

    for (long long i = 0; i <= k; i++) {
        long long lb = lower_bound(b.begin(), b.end(), a[i]) - b.begin();
        if ((m - lb) <= (k - i)) {
            cout << -1 << "\n";
            return 0;
        } else {
            mx = b[lb + k - i];
            ans = max(mx, ans);
        }
    }

    cout << ans + tb << "\n";

    return 0;
}