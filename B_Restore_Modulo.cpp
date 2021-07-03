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

        int mx = 0, cnt = 0;
        for (int i = 0; i < n; i++) {
            mx = max(mx, a[i]);
        }

        for (int i = 1; i < n; i++) {
            if (a[i - 1] == a[i]) {
                cnt++;
            }
        }

        if (cnt == (n - 1)) {
            cout << 0 << "\n";
        } else if (cnt > 0) {
            cout << -1 << "\n";
        } else {
            set<int> st;
            for (int i = 1; i < n; i++) {
                st.insert(a[i] - a[i - 1]);
            }

            if (st.size() == 2) {
                int x = *st.begin();
                st.erase(st.begin());
                int y = *st.begin();

                if ((x > 0 && y > 0) || (x < 0 && y < 0)) {
                    cout << -1 << "\n";
                } else {
                    if (x < y) swap(x, y);

                    if (mx > x - y) {
                        cout << -1 << "\n";
                    } else {
                        cout << x - y << " " << x << "\n";
                    }
                }

            } else {
                cout << -1 << "\n";
            }
        }
    }
    return 0;
}