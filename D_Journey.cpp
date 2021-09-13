// Author: Praveen Kumar Rana
// Date: 16-07-2021 (07:02:25)

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
        vector<int> left(n + 1, 0), right(n + 1, 0);
        string s;
        cin >> s;

        if (s[0] == 'L') left[1] = 1;
        for (int i = 2; i <= n; i++) {
            if (s[i - 1] == 'L') {
                if (s[i - 2] == 'R') {
                    left[i] = left[i - 2] + 2;
                } else {
                    left[i] = 1;
                }
            }
        }

        if (s[n - 1] == 'R') right[n - 1] = 1;
        for (int i = n - 2; i >= 0; i--) {
            if (s[i] == 'R') {
                if (s[i + 1] == 'L') {
                    right[i] = right[i + 2] + 2;
                } else {
                    right[i] = 1;
                }
            }
        }

        for (int i = 0; i <= n; i++) {
            cout << left[i] + right[i] + 1 << " ";
        }
        cout << NL;
    }
}

int32_t main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    solve();
    return 0;
}