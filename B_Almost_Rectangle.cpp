#include <algorithm>
#include <iostream>
#include <vector>
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
        int n;
        cin >> n;
        vector<string> a(n);

        for (int i = 0; i < n; i++) cin >> a[i];

        vector<pi> indices;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (a[i][j] == '*') {
                    indices.push_back({i, j});
                }
            }
        }

        if (indices[0].first == indices[1].first) {
            if (indices[0].first == (n - 1)) {
                a[0][indices[0].second] = '*';
                a[0][indices[1].second] = '*';
            } else {
                a[n - 1][indices[0].second] = '*';
                a[n - 1][indices[1].second] = '*';
            }
        } else if (indices[0].second == indices[1].second) {
            if (indices[0].second == (n - 1)) {
                a[indices[0].first][0] = '*';
                a[indices[1].first][0] = '*';
            } else {
                a[indices[0].first][n - 1] = '*';
                a[indices[1].first][n - 1] = '*';
            }
        } else {
            a[indices[0].first][indices[1].second] = '*';
            a[indices[1].first][indices[0].second] = '*';
        }

        for (auto c : a) cout << c << nl;
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}