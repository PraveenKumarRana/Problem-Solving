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

        vector<int> ans(n, 0), present(n + 1, 0), mn(n, 0), mx(n, 0);
        ans[0] = a[0];
        mn[0] = mx[0] = ans[0];
        present[ans[0]] = 1;
        for (int i = 1; i < n; i++) {
            if (a[i] != a[i - 1]) {
                ans[i] = a[i];
                mn[i] = mx[i] = ans[i];
                present[a[i]] = 1;
            }
        }

        // cout << "Is_Present: ";

        // for (int i = 1; i <= n; i++) {
        //     cout << present[i] << " ";
        // }
        // cout << "\n";

        set<int> st, nst;
        for (int i = 1; i <= n; i++) {
            if (!present[i]) {
                st.insert(i);
            }
        }

        for (int i = 0; i < n; i++) {
            if (!ans[i]) {
                mn[i] = *st.begin();
                nst.insert(*st.begin());
                st.erase(st.begin());
            }
        }

        for (int i = 0; i < n; i++) {
            if (!ans[i]) {
                set<int>::iterator it = --nst.upper_bound(a[i]);
                mx[i] = *it;
                nst.erase(it);
            }
        }

        for (int i = 0; i < n; i++) {
            cout << mn[i] << " ";
        }
        cout << "\n";
        for (int i = 0; i < n; i++) {
            cout << mx[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}