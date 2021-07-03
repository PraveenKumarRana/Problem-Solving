#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    // Your code goes here.

    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> a(m);

    for (int i = 0; i < m; i++) {
        cin >> a[i].first >> a[i].second;
    }

    vector<int> vals({a[0].first, a[0].second});

    bool ok = false;
    for (int x : vals) {
        int all = 0;
        vector<int> fq(n + 1, 0);
        for (auto c : a) {
            if (c.first != x && c.second != x) {
                fq[c.first]++, fq[c.second]++, all++;
            }
        }

        if (*max_element(fq.begin(), fq.end()) == all) {
            ok = true;
        }
    }

    if (ok) {
        cout << "YES"
             << "\n";
    } else {
        cout << "NO"
             << "\n";
    }

    return 0;
}