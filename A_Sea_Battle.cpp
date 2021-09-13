// Author: Praveen Kumar Rana
// Date: 20-07-2021 (05:23:43)

#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

#define NL "\n"
#define int long long int
#define all(x) x.begin(), x.end()
const int mod = 1e9 + 7;

void solve() {
    // Write your code here.
    int w1, h1, w2, h2;
    cin >> w1 >> h1 >> w2 >> h2;

    int ans = 2 * (h1 + h2 + 2) + (w1 + w2) + abs(w1 - w2);
    cout << ans << NL;
}

int32_t main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    solve();
    return 0;
}