#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    // Your code goes here.

    long long tt;
    cin >> tt;
    while (tt--) {
        long long n;
        cin >> n;
        vector<long long> a(n);
        for (long long i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end(), greater<long long>());

        long long total = 0;
        for (long long i = 0; i < n; i++) total += a[i];
        bool ok = true;

        if (total % n != 0) {
            cout << -1 << "\n";
            ok = false;
            continue;
        }

        long long ans = 0;
        long long k = total / n;
        for (int i = 0; i < n; i++) {
            ans += (a[i] > k);
        }

        cout << ans << "\n";
    }

    return 0;
}