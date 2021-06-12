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

        if (k > 60) {
            cout << "NO"
                 << "\n";
        } else {
            int mn = 0;
            if (a == b) {
                mn = 2;
            } else {
                if (a % b == 0 or b % a == 0) {
                    mn = 1;
                } else {
                    mn = 2;
                }
            }

            int g = gcd(a, b);
            a /= g, b /= g;

            int mx = 0;
            mx += fact(a);
            mx += fact(b);
            mx += fact(g);

            if (k >= mn && k <= mx) {
                cout << "YES"
                     << "\n";
            } else {
                cout << "NO"
                     << "\n";
            }
        }
    }
    return 0;
}