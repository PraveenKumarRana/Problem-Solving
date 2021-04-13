#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

#define nl "\n"
#define vi vector<int>
#define pi pair<int, int>
#define ll long long int
#define all(c) c.begin(), c.end()

void Solve() {
    // Your code goes here.
    int tt;
    cin >> tt;
    while (tt--) {
        int n, m;
        cin >> n >> m;
        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            int c;
            cin >> c;
            mp[c % m]++;
        }

        int ans = 0;

        for (auto &c : mp) {
            if (mp[c.first] == 0) {
                ans++;
            } else if (2 * c.first == m) {
                ans++;
            } else if (2 * c.first < m || mp.find(m - c.first) == mp.end()) {
                ans += 1 + max(0, abs(mp[c.second] - mp[m - c.first]) - 1);
            }
        }

        cout << ans << nl;
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}