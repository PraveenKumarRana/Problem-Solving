#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    // Your code goes here.

    long long int tt;
    cin >> tt;
    while (tt--) {
        long long int n;
        cin >> n;
        map<long long int, long long int> mp;
        vector<long long int> a(n);
        set<long long int> st;
        for (long long int i = 0; i < n; i++) {
            cin >> a[i];
            mp[a[i]] = 0;
        }

        long long int ans = 0;
        for (long long int i = 0; i < n; i++) {
            ans += mp[a[i]] * (n - i);
            mp[a[i]] += i + 1;
        }

        cout << ans << "\n";
    }

    return 0;
}