// Author: Praveen Kumar Rana
// Date: 18-07-2021 (20:03:23)

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
        int a, b;
        cin >> a >> b;
        int z = a * b, x = a, y = a;
        int cnt = 100;
        bool ok = false;
        for (int i = z; i < 20 * z; i += z) {
            for (int j = x; j < 20 * x; j += x) {
                if (i > j && (i - j) % (a * b) != 0 && j % b != 0 &&
                    (i - j) != j) {
                    z = i, x = j, y = i - j;
                    ok = true;
                    break;
                }
            }
            if (ok) break;
        }

        if (ok) {
            cout << "YES" << NL;
            cout << x << " " << y << " " << z << NL;
        } else {
            cout << "NO" << NL;
        }
    }
}

int32_t main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    solve();
    return 0;
}