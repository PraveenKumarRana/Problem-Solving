#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    // Your code goes here.

    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<pair<long long, long long>> a(2 * n);
        vector<long long> cost(2 * n + 5, 0);
        long long sum = 0, ans = 1e18;

        for (long long i = 0; i < n; i++) {
            cin >> a[i].first >> a[i].second;
            a[n + i] = a[i];
        }

        for (long long i = 0; i < 2 * n; i++) {
            if (i == 0) {
                cost[i] = a[i].first;
            } else {
                cost[i] = max(0ll, a[i].first - a[i - 1].second);
            }
        }

        for (long long i = 1; i < n; i++) {
            sum += cost[i];
        }

        for (long long i = 0; i < n; i++) {
            ans = min(ans, sum + a[i].first);
            sum -= cost[i + 1];
            sum += cost[i + n];
        }

        cout << ans << "\n";
    }

    return 0;
}