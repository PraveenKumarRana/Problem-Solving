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
        map<int, int> mp;

        vector<int> ans(m, -1);

        int k;
        cin >> k;
        for (int i = 0; i < k; i++) {
            int x;
            cin >> x;
            x--;
            ans[x] = 0;
            mp[0]++;
        }

        for (int i = 1; i < m; i++) {
            cin >> k;
            for (int j = 0; j < k; j++) {
                int x;
                cin >> x;
                x--;
                if (ans[x] >= 0 && mp[ans[x]] > ((m + 1) / 2)) {
                    mp[ans[x]]--;
                    ans[x] = i;
                    mp[ans[x]]++;
                } else {
                    ans[x] = i;
                }
            }
        }

        bool ok = true;
        for (int i = 0; i < m; i++) {
            if (mp[i] > ((n + 1) / 2)) {
                ok = false;
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