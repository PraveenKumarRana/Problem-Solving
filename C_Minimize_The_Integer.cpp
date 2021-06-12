#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    // Your code goes here.

    int tt;
    cin >> tt;
    while (tt--) {
        string s;
        cin >> s;
        vector<int> a(s.size());
        int n = s.size();
        for (int i = 0; i < n; i++) a[i] = s[i] - '0';

        vector<int> e, o;
        for (int i = 0; i < n; i++) {
            if (a[i] & 1) {
                o.push_back(a[i]);
            } else {
                e.push_back(a[i]);
            }
        }

        int i = 0, j = 0, k = -1;
        while (i < e.size() && j < o.size()) {
            if (e[i] < o[j]) {
                a[++k] = e[i++];
            } else {
                a[++k] = o[j++];
            }
        }

        while (j < o.size()) {
            a[++k] = o[j++];
        }
        while (i < e.size()) {
            a[++k] = e[i++];
        }

        for (auto c : a) cout << c;
        cout << "\n";
    }

    return 0;
}