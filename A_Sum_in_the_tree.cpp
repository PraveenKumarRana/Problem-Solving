#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

#define ll long long int

ll MX = 1e5 + 2;
ll mx = 0;

vector<bool> vis(MX, false);
vector<ll> cost(MX, 0);
vector<ll> sum(MX, 0);

bool possible = true;

void dfs(vector<ll> adj[], ll s) {
    for (auto v : adj[s]) {
        if (vis[v]) continue;
        if (cost[v] == -1 && adj[v].size() == 1) {
            cost[v] = 0;
        } else if (cost[v] == -1) {
            cost[v] = sum[s];
        } else if (cost[v] < sum[s]) {
            possible = false;
        } else {
            cost[v] = cost[v] - sum[s];
        }
        sum[v] = cost[v] + sum[s];
        vis[v] = true;
        dfs(adj, v);
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    // Your code goes here.
    ll n;
    cin >> n;
    vector<ll> adj[n + 1];
    for (ll i = 0; i < (n - 1); i++) {
        ll x;
        cin >> x;
        adj[i + 2].push_back(x);
        adj[x].push_back(i + 2);
    }

    for (ll i = 1; i <= n; i++) cin >> cost[i];
    vis[1] = true;
    sum[1] = cost[1];
    dfs(adj, 1);

    for (ll i = 1; i <= n; i++) {
        mx += cost[i];
    }

    if (possible) {
        cout << mx << "\n";
    } else {
        cout << -1 << "\n";
    }

    return 0;
}