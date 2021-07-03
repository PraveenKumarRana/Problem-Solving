#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    // Your code goes here.

    int tt;
    cin >> tt;
    while (tt--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        double ans = 1;
        int x = n;
        for (int i = n - 1; i >= 0; i--) {
            if (a[i] == x) {
                x--;
            } else {
                break;
            }
        }

        while (m--) {
            int terms;
            double p;
            cin >> terms >> p;
            if (terms >= x) {
                ans *= (1.0 - p);
            }
        }

        if (x > 0) {
            printf("%.12f\n", 1.0 - ans);
        } else {
            printf("%.12f\n", 1.0);
        }
    }

    return 0;
}