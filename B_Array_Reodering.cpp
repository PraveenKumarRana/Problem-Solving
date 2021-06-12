#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    // Your code goes here.

    int tt;
    cin >> tt;
    while (tt--) {
        long long n;
        cin >> n;
        vector<long long> a(n), o, e;
        for (long long i = 0; i < n; i++) cin >> a[i];

        for (long long i = 0; i < n; i++) {
            if (a[i] % 2 == 0)
                e.push_back(a[i]);
            else
                o.push_back(a[i]);
        }

        long long k = 0;
        for (long long i = 0; i < e.size(); i++) {
            a[k++] = e[i];
        }

        for (long long i = 0; i < o.size(); i++) {
            a[k++] = o[i];
        }

        long long ans = 0;
        for (long long i = 0; i < n; i++) {
            for (long long j = i + 1; j < n; j++) {
                if (gcd(a[i], 2 * a[j]) > 1) {
                    ans++;
                }
            }
        }

        cout << ans << "\n";
    }

    return 0;
}