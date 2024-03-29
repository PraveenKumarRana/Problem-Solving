// Author: Praveen Kumar Rana
// Date: 29-07-2021 (08:41:52)

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
        cout << (n / 3) + (n % 3 == 1 ? 1 : 0) << " "
             << (n / 3) + (n % 3 == 2 ? 1 : 0) << NL;
    }
}

int32_t main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    solve();
    return 0;
}