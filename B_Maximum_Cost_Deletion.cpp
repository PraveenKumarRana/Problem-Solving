// Author: Praveen Kumar Rana
// Date: 14-07-2021 (20:29:13)

#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

#define NL "\n"
#define int long long int
#define all(x) x.begin(), x.end()
const int mod = 1e9 + 7;

int calc(string s) {
    int n = s.size();
    stack<pair<char, int> > st;
    for (int i = 0; i < n; i++) {
        if (st.empty()) {
            st.push({s[i], 1});
        } else if (!st.empty() && st.top().first == s[i]) {
            st.top().second++;
        } else {
            st.push({s[i], 1});
        }
    }

    int zero = 0, one = 0;
    while (!st.empty()) {
        if (st.top().first == '0') {
            zero++;
        } else {
            one++;
        }
        st.pop();
    }

    return min(one, zero) + 1;
}

void solve() {
    // Write your code here.
    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;
        string s;
        cin >> s;
        int ans = 0;
        if (b >= 0) {
            ans = (a + b) * n;
        } else {
            ans = a * n + calc(s) * b;
        }

        cout << ans << NL;
    }
}

int32_t main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    solve();
    return 0;
}