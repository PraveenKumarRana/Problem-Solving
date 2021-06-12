#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    // Your code goes here.

    long long int n;
    cin >> n;
    vector<long long int> a(n), b(n);
    for (long long int i = 0; i < n; i++) cin >> a[i];
    for (long long int i = 0; i < n; i++) cin >> b[i];

    long long int ans = 0, maxAns = 0;
    long long int total = 0;
    for (long long int i = 0; i < n; i++) total += a[i] * b[i];
    ans = total, maxAns = total;

    for (long long int i = 0; i < n; i++) {
        total = ans;
        long long int l = i - 1, r = i + 1;
        while (l >= 0 && r < n) {
            total -= (a[l] * b[l] + a[r] * b[r]);
            total += (a[r] * b[l] + a[l] * b[r]);
            maxAns = max(maxAns, total);
            l--, r++;
        }
    }

    for (long long int i = 0; i < n; i++) {
        total = ans;
        long long int l = i, r = i + 1;
        while (l >= 0 && r < n) {
            total -= (a[l] * b[l] + a[r] * b[r]);
            total += (a[r] * b[l] + a[l] * b[r]);
            maxAns = max(maxAns, total);
            l--, r++;
        }
    }

    cout << maxAns << "\n";

    return 0;
}