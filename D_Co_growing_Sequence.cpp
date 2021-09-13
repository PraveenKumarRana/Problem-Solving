// Author: Praveen Kumar Rana
// Date: 13-07-2021 (07:42:23)

#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

#define NL "\n"
#define int long long int
#define all(x) x.begin(), x.end()
const int mod = 1e9 + 7;

int len(int n) {
    int cnt = 0;
    while (n > 0) {
        cnt++;
        n /= 2;
    }
    return cnt;
}

int find_x(int a, int b) {
    int x = 0;
    int ta = a, tb = b;
    string bitx = "";
    while (a > 0 || b > 0) {
        if (a % 2 == 1 && b % 2 == 0) {
            bitx += '1';
        } else {
            bitx += '0';
        }
        a /= 2, b /= 2;
    }

    // reverse(all(bitx));

    for (int i = 0; i < max(len(ta), len(tb)); i++) {
        if (bitx[i] == '1') {
            x += 1 << i;
        }
    }

    // cout << bitx << NL;

    return x;
}

void solve() {
    // Write your code here.
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        vector<int> ans(n);
        ans[0] = 0;
        int tmp = ans[0] ^ v[0];
        for (int i = 1; i < n; i++) {
            ans[i] = find_x(tmp, v[i]);
            tmp = ans[i] ^ v[i];
        }

        for (auto c : ans) cout << c << " ";
        cout << NL;
    }

    // cout << find_x(11, 13) << NL;
    // cout << find_x(15, 15) << NL;
    // cout << find_x(15, 1) << NL;
}

int32_t main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    solve();
    return 0;
}