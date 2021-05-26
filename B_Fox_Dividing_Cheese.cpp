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
    int a, b;
    cin >> a >> b;
    int div[3] = {2, 3, 5};
    int fa[3], fb[3];
    for (int i = 0; i < 3; i++) {
        fa[i] = fb[i] = 0;
    }

    for (int i = 0; i < 3; i++) {
        while (a % div[i] == 0 && a > 0) {
            fa[i]++;
            a /= div[i];
        }
        while (b % div[i] == 0 && b > 0) {
            fb[i]++;
            b /= div[i];
        }
    }

    if (a != b) {
        cout << -1 << nl;
        return;
    }

    int ans = 0;
    for (int i = 0; i < 3; i++) {
        ans += abs(fa[i] - fb[i]);
    }

    cout << ans << nl;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}