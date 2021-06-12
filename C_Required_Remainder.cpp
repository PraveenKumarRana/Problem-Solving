#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    // Your code goes here.

    long long tt;
    cin >> tt;
    while (tt--) {
        long long n, x, y;
        cin >> x >> y >> n;
        long long k = n / x;
        if ((n % x) >= y) {
            cout << k * x + y << "\n";
        } else {
            cout << (k - 1) * x + y << "\n";
        }
    }

    return 0;
}