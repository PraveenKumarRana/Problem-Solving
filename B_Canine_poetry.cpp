#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

#define nl "\n"
#define vi vector<int>
#define pi pair<int, int>
#define ll long long int
#define all(x) x.begin(), x.end()

void Solve() {
    // Your code goes here.
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        if (s.size() == 1) {
            cout << 0 << nl;
            continue;
        }

        int ans = 0;
        for (int i = 0; i < (s.size() - 2); i++) {
            if (s[i] != s[i + 2]) {
                continue;
            } else {
                bool ok = true;
                for (char c = 'a'; c <= 'z'; c++) {
                    if (s[i + 2] != c && (i + 3) < s.size() && s[i + 3] != c &&
                        (i + 4) < s.size() && s[i + 4] != c) {
                        s[i + 2] = c;
                        ans++;
                        ok = false;
                        break;
                    }
                }
                if (ok) {
                    for (char c = 'a'; c <= 'z'; c++) {
                        if (s[i + 2] != c && s[i] != c) {
                            s[i + 2] = c;
                            ans++;
                            ok = false;
                            break;
                        }
                    }
                }
            }
        }

        cout << ans << nl;
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}