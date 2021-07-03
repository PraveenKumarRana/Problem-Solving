#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    // Your code goes here.

    int tt;
    cin >> tt;
    while (tt--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        a[0] += k;
        a[n - 1] += k;
        int diff = 2 * k - 1;
        bool ok = true;
        for (int i = 1; i < n; i++) {
            if (abs(a[i] - a[i - 1]) > diff) {
                ok = false;
            }
        }

        if (ok) {
            cout << "YES"
                 << "\n";
        } else {
            cout << "NO"
                 << "\n";
        }
    }

    return 0;
}