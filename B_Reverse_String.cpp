// Author: Praveen Kumar Rana
// Date: 22-07-2021 (20:19:53)

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
        string s, t;
        cin >> s >> t;

        bool ok = false;

        int j = 0;
        for (int i = 0; i < s.size(); i++) {
            if (j < t.size() && s[i] == t[j]) {
                j++;
            } else if (s[i] != t[j]) {
                for (int k = i - 1; k >= 0; k--) {
                    if (j < t.size() && s[k] == t[j]) {
                        j++;
                    }
                }
            } else {
                j = 0;
            }

            if (i == (s.size() - 1)) {
                for (int k = i - 1; k >= 0; k--) {
                    if (j < t.size() && s[k] == t[j]) {
                        j++;
                    }
                }
            }

            if (j == t.size()) {
                ok = true;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << NL;
    }
}

int32_t main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    solve();
    return 0;
}