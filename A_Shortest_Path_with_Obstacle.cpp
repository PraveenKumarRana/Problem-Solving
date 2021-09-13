// Author: Praveen Kumar Rana
// Date: 13-07-2021 (05:38:51)

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
        int x1, y1, x2, y2, x3, y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

        if ((y1 == y2 && y2 == y3)) {
            if (x2 < x3 && x3 < x1) {
                cout << x1 - x2 + 2 << NL;
            } else if (x1 < x3 && x3 < x2) {
                cout << x2 - x1 + 2 << NL;
            } else {
                cout << abs(x1 - x2) << NL;
            }
        } else if ((x1 == x2 && x2 == x3)) {
            if (y2 < y3 && y3 < y1) {
                cout << y1 - y2 + 2 << NL;
            } else if (y1 < y3 && y3 < y2) {
                cout << y2 - y1 + 2 << NL;
            } else {
                cout << abs(y1 - y2) << NL;
            }
        } else {
            cout << abs(x1 - x2) + abs(y1 - y2) << NL;
        }
    }
}

int32_t main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    solve();
    return 0;
}