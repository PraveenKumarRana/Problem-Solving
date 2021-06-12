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
        vector<int> a(n), b(n), c(m);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            a[i]--;
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
            b[i]--;
        }
        for (int i = 0; i < m; i++) {
            cin >> c[i];
            c[i]--;
        }

        map<int, set<int>> done, not_done;

        for (int i = 0; i < n; i++) {
            if (a[i] == b[i]) {
                done[a[i]].insert(i);
            } else {
                not_done[b[i]].insert(i);
            }
        }

        vector<int> ans(m);
        bool ok = true;
        for (int i = 0; i < m; i++) {
            if (not_done[c[i]].size()) {
                int paint = *not_done[c[i]].begin();
                ans[i] = paint;
                not_done[c[i]].erase(not_done[c[i]].begin());
                done[c[i]].insert(paint);
            } else if (done[c[i]].size()) {
                int paint = *done[c[i]].begin();
                ans[i] = paint;
            } else {
                ok = false;
                break;
            }
        }

        if (ok) {
            cout << "YES"
                 << "\n";
            for (auto c : ans) cout << c + 1 << " ";
            cout << "\n";
        } else {
            cout << "NO"
                 << "\n";
        }
    }

    return 0;
}