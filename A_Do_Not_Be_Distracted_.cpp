// Author: Praveen Kumar Rana
// Date: 2021-07-03 08:53:21

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
        string s;
        cin >> s;
        stack<char> st;
        for (int i = 0; i < n; i++) {
            if (st.empty()) {
                st.push(s[i]);
            } else {
                if (st.top() != s[i]) {
                    st.push(s[i]);
                }
            }
        }

        bool ok = true;
        map<char, int> mp;
        while (!st.empty()) {
            mp[st.top()]++;
            if (mp[st.top()] != 1) {
                ok = false;
            }
            st.pop();
        }

        if (ok)
            cout << "YES" << NL;
        else
            cout << "NO" << NL;
    }
}

int32_t main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    solve();
    return 0;
}