// Author: Praveen Kumar Rana
// Date: 20-07-2021 (06:09:16)

#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

#define NL "\n"
#define int long long int
#define all(x) x.begin(), x.end()
const int mod = 1e9 + 7;

void solve() {
    // Write your code here.
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    sort(all(v), greater<int>());
    list<int> ans;

    for (int i = 0; i < n; i++) {
        if (i & 1) {
            ans.push_front(v[i]);
        } else {
            ans.push_back(v[i]);
        }
    }

    for (auto c : ans) cout << c << " ";
    cout << NL;
}

int32_t main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    solve();
    return 0;
}