#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

const long long mx = 1e5 + 1;
long long dp[2][mx], A[2][mx], n;
vector<long long> adj[mx];

void dfs(long long v, long long p = -1) {
    dp[0][v] = dp[1][v] = 0;
    for (long long u : adj[v]) {
        if (u == p) continue;
        dfs(u, v);
        dp[0][v] += max(abs(A[0][v] - A[1][u]) + dp[1][u],
                        dp[0][u] + abs(A[0][v] - A[0][u]));
        dp[1][v] += max(abs(A[1][v] - A[1][u]) + dp[1][u],
                        dp[0][u] + abs(A[1][v] - A[0][u]));
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    // Your code goes here.

    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        for (long long i = 1; i <= n; i++) {
            cin >> A[0][i] >> A[1][i];
        }

        fill(adj + 1, adj + n + 1, vector<long long>());

        for (long long i = 1; i < n; i++) {
            long long u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        dfs(1);
        cout << max(dp[0][1], dp[1][1]) << "\n";
    }

    return 0;
}