// Author: Praveen Kumar Rana
// Date: 17-07-2021 (20:55:42)

#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

#define NL "\n"
#define int long long int
#define all(x) x.begin(), x.end()
const int mod = 1e9 + 7;

void solve() {
    // Write your code here.
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        map<int, int> dup;
        for (int i = 0; i <= n; i++) dup[i] = -1;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            if (dup[v[i]] == -1) {
                dup[v[i]] = i;
            }
        }

        set<int> st;
        for (int i = 1; i <= n; i++) {
            st.insert(i);
        }

        map<int, int> mp, used;
        for (int i = 0; i < n; i++) {
            if (used[v[i]] == 0 && (i + 1) != v[i]) {
                mp[i] = 1;
                used[v[i]] = 1;
                st.erase(v[i]);
            }
        }

        int corr = n - st.size();

        for (int i = 0; i < n; i++) {
            if (mp[i] == 0) {
                if ((i + 1) != (*st.begin())) {
                    v[i] = *st.begin();
                    st.erase(st.begin());
                } else {
                    if ((st.size() > 1 && (i + 1) == (*st.begin()))) {
                        int tmp = *st.begin();
                        st.erase(st.begin());
                        v[i] = *st.begin();
                        st.erase(st.begin());
                        st.insert(tmp);
                    } else {
                        // cout << "Inside: " << dup[v[i]] << NL;
                        int tmp = v[i];
                        v[i] = v[dup[tmp]];
                        v[dup[tmp]] = *st.begin();
                        st.erase(st.begin());
                    }
                }
                mp[i] = 1;
            }
        }

        cout << corr << NL;
        for (auto c : v) cout << c << " ";
        cout << NL;
    }
}

int32_t main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    solve();
    return 0;
}