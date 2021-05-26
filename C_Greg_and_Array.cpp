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
    int n, m, k;
    cin >> n >> m >> k;
    vi pre(n + 1, 0);
    vi a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) {
        int l, r, d;
        cin >> l >> r >> d;
        l--;
        pre[l] += d;
        pre[r] -= d;
    }

    for (int i = 1; i <= n; i++) {
        pre[i] += pre[i - 1];
    }

    cout << "Pre: ";
    for (auto c : pre) cout << c << " ";
    cout << nl;

    vi diff(n + 1, 0);
    for (int i = 0; i < k; i++) {
        int x, y;
        cin >> x >> y;
        x--, y--;
        int dif = (x > 0 ? pre[y] - pre[x - 1] : pre[y - 1]);
        diff[x] += dif;
        diff[y] -= dif;
    }

    for (int i = 1; i <= n; i++) {
        diff[i] += diff[i - 1];
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] + diff[i] << " ";
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}