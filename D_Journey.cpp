// Author: Praveen Kumar Rana
// Date: 03-07-2021 (17:57:49)

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

        vector<int> lr(n, 1), rl(n, 1);

        for (int i = 1; i < n; i++) {
            if (s[i - 1] != s[i]) {
                lr[i] += lr[i - 1];
            } else {
                lr[i] = 1;
            }
        }

        for (int i = n - 2; i >= 0; i--) {
            if (s[i - 1] != s[i]) {
                rl[i] += rl[i + 1];
            } else {
                rl[i] = 1;
            }
        }

        for (auto c : lr) cout << c << " ";
        cout << NL;
        for (auto c : rl) cout << c << " ";
        cout << NL;
    }
}

int32_t main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    solve();
    return 0;
}