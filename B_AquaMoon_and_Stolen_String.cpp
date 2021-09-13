// Author: Praveen Kumar Rana
// Date: 21-07-2021 (20:39:27)

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
        int n, m;
        cin >> n >> m;
        map<char, int> ma;
        vector<string> st(n);
        for (int i = 0; i < n; i++) {
            cin >> st[i];
            for (auto c : st[i]) {
                ma[c]++;
            }
        }

        for (int i = 0; i < (n - 1); i++) {
            string t;
            cin >> t;
            for (auto c : t) {
                ma[c]--;
            }
        }

        string ans = "";
        for (auto c : st) {
            bool ok = true;
            for (auto ch : c) {
                if (!ma[ch]) {
                    ok = false;
                }
            }
            if (ok) {
                ans = c;
                break;
            }
        }
        cout << ans << NL;
        fflush(stdout);
    }
}

int32_t main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    solve();
    return 0;
}