#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

struct dtype {
    int t, i, j;
};

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

        vector<dtype> ans;
        int mx = max_element(a.begin(), a.end()) - a.begin();

        if (mx != 0) {
            a[0] += 2 * a[mx];
            ans.push_back({1, 0, mx});
            ans.push_back({1, 0, mx});
        }

        for (int i = 1; i < n; i++) {
            while (a[i] >= 0) {
                a[i] -= a[0];
                ans.push_back({2, 0, i});
            }
        }

        int mn = min_element(a.begin(), a.end()) - a.begin();
        if (mn != 0) {
            while (a[0] >= 0) {
                a[0] += a[mn];
                ans.push_back({1, 0, mn});
            }
        }

        cout << ans.size() << "\n";
        for (auto c : ans) {
            cout << c.t << " " << c.i + 1 << " " << c.j + 1 << "\n";
        }
    }

    return 0;
}