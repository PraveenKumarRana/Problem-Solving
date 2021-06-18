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
        set<int> frnd[m];
        for (int i = 0; i < m; i++) {
            int x;
            cin >> x;
            for (int j = 0; j < x; j++) {
                int f;
                cin >> f;
                f--;
                frnd[i].insert(f);
            }
        }

        vector<int> ans(m, 0);
        map<int, int> cnt;
        for (int i = 0; i < m; i++) {
            ans[i] = *frnd[i].begin();
            frnd[i].erase(frnd[i].begin());
            cnt[ans[i]]++;
        }

        for (int i = 0; i < m; i++) {
            if (cnt[ans[i]] > ((m + 1) / 2)) {
                if (frnd[i].size()) {
                    cnt[ans[i]]--;
                    ans[i] = *frnd[i].begin();
                    frnd[i].erase(frnd[i].begin());
                    cnt[ans[i]]++;
                }
            }
        }

        bool ok = true;
        for (int i = 0; i < m; i++) {
            if (cnt[ans[i]] > ((m + 1) / 2)) {
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