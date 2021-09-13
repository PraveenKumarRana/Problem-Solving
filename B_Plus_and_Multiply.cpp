// Author: Praveen Kumar Rana
// Date: 03-07-2021 (20:07:36)

#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

#define NL "\n"
#define int long long int
#define all(x) x.begin(), x.end()
const int mod = 1e9 + 7;

int power(int a, int b) {
    int p = 1;
    for (int i = 0; i < b; i++) {
        p *= a;
    }
    return p;
}

void solve() {
    // Write your code here.
    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;

        int pd = 1;

        bool ok = false;
        while (pd <= n) {
            if ((n - pd) < 0) {
                break;
            } else if ((n - pd) % b == 0) {
                cout << "Yes" << NL;
                ok = true;
                break;
            }
            pd *= a;
        }

        if (!ok) {
            cout << "No" << NL;
        }
    }
}

int32_t main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    solve();
    return 0;
}