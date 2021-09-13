// Author: Praveen Kumar Rana
// Date: 19-07-2021 (20:38:46)

#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

#define NL "\n"
#define int long long int
#define all(x) x.begin(), x.end()
const int mod = 1e9 + 7;

pair<bool, int> checker(vector<int> a, vector<int> v, int n) {
    bool ok = true;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if ((abs(v[i] - a[i])) == 1) {
            cnt++;
        } else if (v[i] == a[i]) {
            continue;
        } else {
            ok = false;
        }
    }

    return {ok, cnt};
}

void solve() {
    // Write your code here.
    int n;
    cin >> n;
    vector<int> v(n), dif(n, 0);
    for (int i = 0; i < n; i++) cin >> v[i];

    int cnt = 0;
    if (n <= 2) {
        cout << 0 << NL;
    } else {
        int d = v[1] - v[0];
        vector<int> mdif({d - 2, d - 1, d, d + 1, d + 2});
        vector<int> a({v[0] - 1, v[0], v[0] + 1});

        bool ok = false;
        int mn = mod;

        for (auto c : a) {
            for (auto e : mdif) {
                vector<int> tmp(n);
                tmp[0] = c;
                for (int i = 1; i < n; i++) {
                    tmp[i] = tmp[i - 1] + e;
                }

                // for (auto c : tmp) cout << c << " ";
                // cout << NL;

                pair<bool, int> val = checker(tmp, v, n);
                if (val.first) {
                    ok = true;
                    mn = min(val.second, mn);
                }
            }
        }

        if (ok)
            cout << mn << NL;
        else
            cout << -1 << NL;
    }
}

int32_t main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    solve();
    return 0;
}