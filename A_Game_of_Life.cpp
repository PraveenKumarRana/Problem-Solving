#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    // Your code goes here.

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int x = min(n, m);
        string s;
        cin >> s;
        string ans = string(s.size(), '0');

        for (int i = 0; i < x; i++) {
            for (int j = 0; j < n; j++) {
                if (s[j] == '0') {
                    if (j - 1 >= 0 && j + 1 < n && s[j - 1] == '1' &&
                        s[j + 1] == '1') {
                        ans[j] = '0';
                    } else if (j - 1 >= 0 && s[j - 1] == '1') {
                        ans[j] = '1';
                    } else if (j + 1 < n && s[j + 1] == '1') {
                        ans[j] = '1';
                    }
                }
            }

            for (int j = 0; j < n; j++) {
                if (s[j] == '1' || ans[j] == '1') {
                    s[j] = '1';
                }
            }
        }

        cout << s << "\n";
    }

    return 0;
}