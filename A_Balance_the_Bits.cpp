#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    // Your code goes here.

    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string a = string(n, '0'), b = string(n, '0');

        int cnt = 0;
        for (int i = 0; i < n; i++) cnt += (s[i] == '1');

        if (s[0] == '1' && s[n - 1] == '1' && cnt % 2 == 0) {
            int k = cnt / 2;
            for (int i = 0; i < n; i++) {
                if (k > 0 && s[i] == '1') {
                    a[i] = '(';
                    b[i] = '(';
                    k--;
                }
            }
            k = cnt / 2;

            for (int i = n - 1; i >= 0; i--) {
                if (k > 0 && s[i] == '1') {
                    a[i] = ')';
                    b[i] = ')';
                    k--;
                }
            }

            bool ok = true;
            for (int i = 1; i < n; i++) {
                if (s[i] == '0') {
                    if (ok) {
                        ok = false;
                        a[i] = ')';
                        b[i] = '(';
                    } else {
                        ok = true;
                        a[i] = '(';
                        b[i] = ')';
                    }
                }
            }

            cout << "YES"
                 << "\n";
            cout << a << "\n" << b << "\n";

        } else {
            cout << "NO"
                 << "\n";
        }
    }

    return 0;
}