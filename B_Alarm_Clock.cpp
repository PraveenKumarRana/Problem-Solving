#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    // Your code goes here.

    long long int tt;
    cin >> tt;
    while (tt--) {
        long long int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (b >= a) {
            cout << b << "\n";
        } else {
            a -= b;
            if (c > d) {
                long long int res = b + ((a + c - d - 1) / (c - d)) * c;
                cout << res << "\n";
            } else {
                cout << -1 << "\n";
            }
        }
    }

    return 0;
}