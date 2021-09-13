// Author: Praveen Kumar Rana
// Date: 14-07-2021 (20:08:14)

#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

#define NL "\n"
#define int long long int
#define all(x) x.begin(), x.end()
const int mod = 1e9 + 7;

int sqr(int n) {
    int k = 1;
    while (k * k <= n) {
        k++;
    }
    return k - 1;
}

void solve() {
    // Write your code here.
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int k = sqr(n);
        int val = n - k * k;
        int mx = 2 * k + 1;
        while (val > 0) {
            if (mx <= val) {
                k++;
                val -= mx;
            }
            if (val == 0) {
                break;
            }
            mx--;
        }

        cout << k << NL;
    }
}

int32_t main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    solve();
    return 0;
}