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

        int sum = 0;
        for (int i = 0; i < n; i++) sum += a[i];
        if (sum < n) {
            cout << 1 << "\n";
        } else if (sum == n) {
            cout << 0 << "\n";
        } else {
            cout << sum - n << "\n";
        }
    }

    return 0;
}