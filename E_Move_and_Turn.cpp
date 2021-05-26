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
    int n;
    cin >> n;
    int x = n / 2;
    int y = n - x;

    if (n <= 2) {
        cout << 4 << nl;
        return;
    }

    int cnt = 0;
    int dist = x * x + y * y;
    for (int i = -n; i <= n; i++) {
        for (int j = -n; j <= n; j++) {
            int dis = i * i + j * j;
            // cout << i << " " << j << " " << dis << " : " << dist << nl;
            if (dist == dis || dis == (x * x)) {
                cnt++;
            }
        }
    }

    cout << cnt << nl;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}