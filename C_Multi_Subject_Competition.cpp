#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    // Your code goes here.

    long long n, m;
    cin >> n >> m;

    vector<vector<long long>> g(m, vector<long long>());
    for (long long i = 0; i < n; i++) {
        long long s, r;
        cin >> s >> r;
        s--;
        g[s].push_back(r);
    }

    sort(g.begin(), g.end(), [](vector<long long> a, vector<long long> b) {
        return a.size() > b.size();
    });

    long long mx = 0;
    for (long long i = 0; i < m; i++) {
        sort(g[i].begin(), g[i].end(), greater<long long>());
        mx = max(mx, (long long)g[i].size());
        for (long long j = 1; j < g[i].size(); j++) {
            g[i][j] += g[i][j - 1];
        }
    }

    long long sum = 0;
    for (long long i = mx - 1; i >= 0; i--) {
        long long ss = 0;
        for (long long j = 0; j < m; j++) {
            if ((long long)g[j].size() > i && g[j][i] > 0) {
                ss += g[j][i];
            }

            if (g[j].size() <= i) {
                break;
            }
        }
        sum = max(ss, sum);
    }

    cout << sum << "\n";

    return 0;
}