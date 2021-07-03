#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    // Your code goes here.

    long long n, m;
    cin >> n >> m;
    map<long long, long long> ma, mb;
    for (long long i = 0; i < n; i++) {
        long long x;
        cin >> x;
        ma[x]++;
    }

    for (long long i = 0; i < m; i++) {
        long long x;
        cin >> x;
        mb[x]++;
    }

    long long ans = 0;
    for (auto c : ma) {
        ans += c.second * mb[c.first];
    }

    cout << ans << "\n";

    return 0;
}