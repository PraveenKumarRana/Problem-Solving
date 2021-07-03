#include <bits/stdc++.h>
using namespace std;

#define ll long long
ll n, m, k, q, a[100005], b[100005], t[100005], cur, f[100005], ans;

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for (ll i = 1; i <= n; i++) cin >> a[i];
    for (ll i = 1; i <= k; i++) b[i] = a[i];
    cur = k + 1;
    while (m < n) {
        q = m * 100.0 / n + 0.5;
        for (ll i = 1; i <= k; i++) {
            if (!b[i]) continue;
            t[i]++;
            if (!f[i] && q == t[i]) {
                ans++;
                f[i] = 1;
            }
            if (t[i] >= b[i]) {
                b[i] = a[cur++];
                m++;
                t[i] = 0;
                f[i] = 0;
            }
        }
    }
    cout << ans;
}
