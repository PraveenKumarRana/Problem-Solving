#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

#define nl "\n"
#define vi vector<int>
#define pi pair<int, int>
#define ll long long int
#define all(x) x.begin(), x.end()

void Solve() {
    // Your code goes here.
    int t;
    cin >> t;
    while (t--) {
        int n, m, x;
        cin >> n >> m >> x;
        vi a;
        priority_queue<pair<int, vector<int>>> pq;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            pq.push({-x, {i}});
        }

        while (pq.size() != m) {
            pair<int, vector<int>> x = pq.top();
            pq.pop();
            pair<int, vector<int>> y = pq.top();
            pq.pop();
            vi temp;
            for (auto c : x.second) temp.push_back(c);
            for (auto c : y.second) temp.push_back(c);
            pq.push({x.first + y.first, temp});
        }

        vi ans(n, 0);

        int i = 1;
        while (!pq.empty()) {
            pair<int, vector<int>> pii = pq.top();
            pq.pop();
            for (auto c : pii.second) ans[c] = i;
            a.push_back(-pii.first);
            i++;
        }

        int mn = *min_element(all(a));
        int mx = *max_element(all(a));

        if (mx - mn > x) {
            cout << "NO" << nl;
        } else {
            cout << "YES" << nl;
            for (auto c : ans) cout << c << " ";
            cout << nl;
        }
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}