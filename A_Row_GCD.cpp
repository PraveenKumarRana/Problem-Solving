#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    // Your code goes here.

    long long int n, m;
    cin >> n >> m;
    vector<long long int> a(n), b(m);
    for (long long int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (long long int i = 0; i < m; i++) {
        cin >> b[i];
    }

    if (n == 1) {
        for (long long int i = 0; i < m; i++) {
            cout << a[0] + b[i] << " ";
        }
        cout << "\n";
    } else {
        long long int g = abs(a[1] - a[0]);
        for (long long int i = 2; i < n; i++) {
            g = gcd(g, abs(a[i] - a[0]));
        }

        for (long long int i = 0; i < m; i++) {
            long long int k = g;
            k = gcd(g, a[0] + b[i]);
            cout << k << " ";
        }
        cout << "\n";
    }

    return 0;
}