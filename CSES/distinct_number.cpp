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

    sort(all(a));
    int v = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (v != a[i]) {
            v = a[i];
            cnt++;
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