#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    // Your code goes here.

    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            a[i] = s[i] - '0';
        };

        map<int, int> mp;
        long long ans = 0;
        mp[0] = 1;
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            a[i]--;
            sum += a[i];
            ans += (long long)mp[sum];
            mp[sum]++;
        }

        cout << ans << "\n";
    }

    return 0;
}