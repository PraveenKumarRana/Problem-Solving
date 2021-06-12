#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    // Your code goes here.

    int n;
    cin >> n;
    vector<pair<int, int>> a(2 * n);

    int k = 0;
    for (int i = 0; i < n; i++) {
        int l, r;
        cin >> l >> r;
        a[k++] = {l, 1};
        a[k++] = {r, -1};
    }

    sort(a.begin(), a.end());

    int ans = 0, sum = 0;
    for (auto c : a) {
        sum += c.second;
        ans = max(ans, sum);
    }

    cout << ans << "\n";

    return 0;
}