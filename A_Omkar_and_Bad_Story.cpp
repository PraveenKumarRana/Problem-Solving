// Author: Praveen Kumar Rana
// Date: 04-07-2021 (13:40:05)

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
        vector<int> v(n);
        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            mp[v[i]]++;
        }

        bool yes = false;

        while (v.size() < 300) {
            bool ok = true;
            for (int i = 0; i < v.size(); i++) {
                for (int j = i + 1; j < v.size(); j++) {
                    int num = abs(v[i] - v[j]);
                    if (mp[num] == 0) {
                        ok = false;
                        break;
                    }
                }
                if (!ok) {
                    break;
                }
            }

            bool f = false;

            if (!ok) {
                for (int i = 0; i < v.size(); i++) {
                    for (int j = i + 1; j < v.size(); j++) {
                        int num = abs(v[i] - v[j]);
                        if (mp[num] == 0) {
                            v.push_back(num);
                            mp[num]++;
                        }

                        if (v.size() >= 300) {
                            f = true;
                            break;
                        }
                    }
                    if (f) {
                        break;
                    }
                }
            }

            if (ok) {
                yes = true;
                break;
            }
        }

        if (yes) {
            cout << "Yes" << NL;
            cout << v.size() << NL;
            for (auto c : v) cout << c << " ";
            cout << NL;
        } else {
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