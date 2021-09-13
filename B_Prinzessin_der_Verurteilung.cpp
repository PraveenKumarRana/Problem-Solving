// Author: Praveen Kumar Rana
// Date: 04-07-2021 (13:56:43)

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
        set<string> st;
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                st.insert(s.substr(i, j + 1));
            }
        }

        vector<string> vs;
        map<string, int> mp;
        for (auto c : st) {
            vs.push_back(c);
            mp[c]++;
        }
    }
}

int32_t main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    solve();
    return 0;
}