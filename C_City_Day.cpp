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
    int n, x, y;
    cin >> n >> x >> y;
    vi a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    for (int i = 0; i < n; i++) {
        bool ok = true;
        for (int j = i - 1; j >= max(i - x, 0); j--) {
            if (a[j] < a[i]) {
                ok = false;
                break;
            }
        }

        for (int j = i + 1; j < min(i + y + 1, n); j++) {
            if (a[j] < a[i]) {
                ok = false;
                break;
            }
        }

        if (ok) {
            cout << i + 1 << nl;
            break;
        }
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}