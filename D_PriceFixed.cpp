// Author: Praveen Kumar Rana
// Date: 14-07-2021 (07:27:07)

#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

#define NL "\n"
#define int long long int
#define all(x) x.begin(), x.end()
const int mod = 1e9 + 7;

void solve() {
    // Write your code here.
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].second >> v[i].first;
    }

    sort(all(v));
    int i = 0, j = n - 1;
    int sum = 0;
    int ans = 0;
    while (j >= i) {
        int dif = max(v[i].first - sum, 0ll);
        if (v[i].first <= sum) {
            ans += v[i].second;
            sum += v[i].second;
            i++;
        } else if (dif < v[j].second) {
            sum += dif;
            v[j].second = v[j].second - dif;
            ans += dif * 2;
        } else if (dif == v[j].second) {
            sum += dif;
            v[j].second -= dif;
            ans += dif * 2;
            j--;
        } else {
            ans += dif * 2;
            v[i].first -= dif;
            ans += v[i].first;
            i++;
            v[i].first = 0;
            sum += v[i]
        }
    }

    cout << ans << NL;
}

int32_t main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    solve();
    return 0;
}