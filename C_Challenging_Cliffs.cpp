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
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end());

        int dif = a[1] - a[0];
        vector<pair<int, int>> tmp;
        tmp.push_back({a[0], a[1]});
        for (int i = 2; i < n; i++) {
            if ((a[i] - a[i - 1]) < dif) {
                dif = a[i] - a[i - 1];
                tmp.push_back({a[i - 1], a[i]});
            }
        }

        vector<int> ans(n);
        ans[0] = tmp[0].first, ans[n - 1] = tmp[0].second;

        a.erase(a.begin() + y);
        a.erase(a.begin() + x);

        if (a.size() <= 2) {
            sort(a.begin(), a.end(), greater<int>());
        } else {
            sort(a.begin(), a.end());
        }

        for (int i = 1; i < (n - 1); i++) {
            ans[i] = a[i - 1];
        }

        int cnt = 0;
        cnt += (ans[1] >= ans[0]);
        cnt += (ans[n - 2] <= ans[n - 1]);

        for (int i = 1; i < tmp.size(); i++) {
            int c = 0;
            c += (ans[1] >= tmp[i].first);
            c += (ans[n - 2] <= tmp[i].second);

            if (c > cnt) {
                ans[0] = tmp[i].first;
                ans[n - 1] = tmp[i].second;
                cnt = c;
            }
        }

        for (auto c : ans) {
            cout << c << " ";
        }
        cout << "\n";
    }

    return 0;
}