#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    // Your code goes here.

    long long int n;
    cin >> n;
    vector<long long int> a(n), g(n);
    for (long long int i = 0; i < n; i++) {
        cin >> a[i];
    }

    g[n - 1] = a[n - 1];
    long long int gcal = a[n - 1];
    for (long long int i = n - 2; i >= 0; i--) {
        gcal = gcd(gcal, a[i]);
        g[i] = gcal;
    }

    for (long long int i = 0; i < (n - 1); i++) {
        a[i] = (a[i] * g[i + 1]) / g[i];
    }

    long long int ans = a[0];
    for (long long int i = i; i < (n - 1); i++) {
        ans = gcd(ans, a[i]);
    }

    cout << ans << "\n";

    return 0;
}