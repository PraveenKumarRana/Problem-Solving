// Author: Praveen Kumar Rana
// Date: 21-07-2021 (20:14:10)

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
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        int ok = 0;
        for (int i = 0; i < n; i++) {
            ok += a[i] - b[i];
        }

        if (ok == 0) {
            vector<pair<int, int>> steps;
            for (int i = 0; i < n; i++) {
                if (a[i] < b[i]) {
                    while (a[i] < b[i]) {
                        for (int j = 0; j < n; j++) {
                            while (a[j] > b[j] && a[i] < b[i]) {
                                a[j]--;
                                a[i]++;
                                steps.push_back({j + 1, i + 1});
                            }
                        }
                    }
                }
            }
            cout << steps.size() << NL;

            for (auto c : steps) {
                cout << c.first << " " << c.second << NL;
            }
        } else {
            cout << -1 << NL;
        }
    }
}

int32_t main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    solve();
    return 0;
}