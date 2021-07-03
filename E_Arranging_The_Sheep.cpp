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
        vector<int> v;
        for (int i = 0; i < n; i++) {
            if (s[i] == '*') {
                v.push_back(i);
            }
        }

        int ans = 0;
        if (v.size()) {
            int mid = v[v.size() / 2];
            // cout << "Mid: " << mid << NL;
            int pos = mid;
            for (int i = pos - 1; i >= 0; i--) {
                if (s[i] == '*') {
                    ans += (pos - i - 1);
                    pos--;
                }
            }

            pos = mid;
            for (int i = pos + 1; i < n; i++) {
                if (s[i] == '*') {
                    ans += (i - pos - 1);
                    pos++;
                }
            }
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