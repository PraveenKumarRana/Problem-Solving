#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    // Your code goes here.

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    map<int, int> mp;
    int ans = 0;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
        if (mp[sum]) {
            ans += mp[sum];
            mp[sum] = 1;
        }
        mp[sum]++;
    }

    cout << ans << "\n";
    return 0;
}