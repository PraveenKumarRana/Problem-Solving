// Author: Praveen Kumar Rana
// Date: 15-07-2021 (07:17:47)

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
        string s;
        cin >> s;
        int zero = 0, one = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '1') {
                one++;
                break;
            }
        }

        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] == '0') {
                zero++;
            } else {
                break;
            }
        }

        if (one && zero >= 2) {
            cout << "NO" << NL;
        } else {
            cout << "YES" << NL;
        }
    }
}

int32_t main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    solve();
    return 0;
}