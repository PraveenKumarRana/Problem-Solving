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

        int mn = *min_element(a.begin(), a.end());
        int mx = *max_element(a.begin(), a.end());

        if (mn == mx) {
            cout << -1 << "\n";
        } else {
            for (int i = 0; i < n; i++) {
                if (a[i] == mx && (i > 0 && (a[i - 1] < a[i]) ||
                                   (i + 1 < n && (a[i + 1] < a[i])))) {
                    cout << i + 1 << "\n";
                    break;
                }
            }
        }
    }

    return 0;
}