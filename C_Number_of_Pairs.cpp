#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    // Your code goes here.

    long long tt;
    cin >> tt;
    while (tt--) {
        long long n, l, r;
        cin >> n >> l >> r;
        vector<long long> a(n);
        for (long long i = 0; i < n; i++) cin >> a[i];

        sort(a.begin(), a.end());

        // for (auto c : a) cout << c << " ";
        // cout << "\n";

        long long ans = 0;
        for (long long i = 0; i < n; i++) {
            long long lb = l - a[i], ub = r - a[i];
            long long ll =
                lower_bound(a.begin() + i + 1, a.end(), lb) - a.begin();
            long long rr =
                lower_bound(a.begin() + i + 1, a.end(), ub + 1) - a.begin();

            if (ll == n || (ll < n && a[i] + a[ll] > r)) {
                ll--;
            }
            if (rr == n || (rr < n && a[i] + a[rr] > r)) {
                rr--;
            }

            // cout << "The value: " << ll << " - " << rr << "\n";

            if (rr >= ll && ll > i && rr > i && ll <= n && rr <= n) {
                if (a[i] + a[ll] >= l && a[i] + a[rr] <= r) {
                    ans += abs(rr - ll) + 1;
                }
            }
        }

        // long long cnt = 0;
        // for (int i = 0; i < n; i++) {
        //     for (int j = i + 1; j < n; j++) {
        //         if (a[i] + a[j] >= l && a[i] + a[j] <= r) {
        //             cnt++;
        //         }
        //     }
        // }

        // cout << ans << " " << cnt << "\n";
        cout << ans << "\n";
    }

    return 0;
}