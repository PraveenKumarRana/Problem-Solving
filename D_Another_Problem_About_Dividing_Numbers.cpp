#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

int fact(int n) {
    int cnt = 0;
    for (int i = 2; (i * i) <= n; i++) {
        if (n % i == 0) {
            while (n % i == 0) {
                cnt++;
                n /= i;
            }
        }
    }
    if (n > 1) {
        cnt++;
    }
    return cnt;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    // Your code goes here.

    int tt;
    cin >> tt;
    while (tt--) {
        int a, b, k;
        cin >> a >> b >> k;

        int m = 0;
        if (a == b) {
            m = 0;
        } else if (gcd(a, b) == a || gcd(a, b) == b) {
            m = 1;
        } else {
            m = 2;
        }

        int n = fact(a) + fact(b);

        if (k >= m && k <= n && k == 1 && m == 1) {
            cout << "YES"
                 << "\n";
        } else if (k >= m && k <= n && k > 1) {
            cout << "YES"
                 << "\n";
        } else {
            cout << "NO"
                 << "\n";
        }
    }
    return 0;
}