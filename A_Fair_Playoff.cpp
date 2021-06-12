#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    // Your code goes here.

    int tt;
    cin >> tt;
    while (tt--) {
        vector<int> a(4);
        for (int i = 0; i < 4; i++) cin >> a[i];
        int l = max(a[0], a[1]), r = max(a[2], a[3]);
        sort(a.begin(), a.end());
        if ((a[2] == l && a[3] == r) || (a[2] == r && a[3] == l)) {
            cout << "YES"
                 << "\n";
        } else {
            cout << "NO"
                 << "\n";
        }
    }

    return 0;
}