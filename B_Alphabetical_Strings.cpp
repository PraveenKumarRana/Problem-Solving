// Author: Praveen Kumar Rana
// Date: 13-07-2021 (05:56:32)

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
        int pos_a = -1;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'a') {
                pos_a = i;
            }
        }

        if (pos_a == -1) {
            cout << "NO" << NL;
        } else {
            char ch = 'a';
            int j = pos_a - 1;
            string tm = "";
            for (int i = pos_a; (i < s.size() || j >= 0);) {
                if (i < s.size() && s[i] == ch) {
                    tm += s[i];
                    ch++;
                    i++;
                } else if (j >= 0 && s[j] == ch) {
                    tm += s[j];
                    j--;
                    ch++;
                } else {
                    break;
                }
            }
            // cout << tm << NL;

            cout << ((tm.size() == s.size()) ? "YES" : "NO") << NL;
        }
    }
}

int32_t main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    solve();
    return 0;
}