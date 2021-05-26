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
    vi a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int s = 0, d = 0;
    int i = 0, j = n - 1;
    bool ok = true;
    while (i <= j) {
        if (ok) {
            if (a[i] > a[j]) {
                s += a[i];
                i++;
            } else {
                s += a[j];
                j--;
            }
            ok = false;
        } else {
            if (a[i] > a[j]) {
                d += a[i];
                i++;
            } else {
                d += a[j];
                j--;
            }
            ok = true;
        }
    }

    cout << s << " " << d << nl;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}