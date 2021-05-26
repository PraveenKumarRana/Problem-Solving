#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

#define nl "\n"
#define vi vector<int>
#define pi pair<int, int>
#define ll long long int
#define all(x) x.begin(), x.end()

bool check(vi a, int n) {
    for (int i = 0; i < n; i++) {
        if (a[i] != i) {
            return false;
        }
    }
    return true;
}

void Solve() {
    // Your code goes here.
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vi a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            a[i]--;
        }

        if (check(a, n)) {
            cout << 0 << nl;
        } else {
            if (a[0] == 0 || a[n - 1] == (n - 1)) {
                cout << 1 << nl;
            } else if (a[0] == (n - 1) && a[n - 1] == 0) {
                cout << 3 << nl;
            } else {
                cout << 2 << nl;
            }
        }
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}