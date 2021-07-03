#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    // Your code goes here.

    int n, k;
    cin >> n >> k;
    vector<int> a(k), lasts(n + 1, -1), firsts(n + 1, k);
    for (int i = 0; i < k; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < k; i++) {
        lasts[a[i]] = i + 1;
    }
    for (int i = k - 1; i >= 0; i--) {
        firsts[a[i]] = i + 1;
    }

    int ans = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = max(i - 1, 1); j <= min(n, i + 1); j++) {
            if (j == i) {
                if (lasts[i] == -1) {
                    ans++;
                }
            } else {
                ans += (firsts[j] - lasts[i]) >= 0;
            }
        }
    }

    cout << ans << "\n";
    return 0;
}