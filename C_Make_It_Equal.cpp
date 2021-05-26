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
    int n, k;
    cin >> n >> k;
    vi a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(all(a));
    int cnt = 0;
    vi fad(n);
    for (int i = 0; i < n; i++) {
        fad[i] = a[i] - a[0];
    }
    reverse(all(fad));
    for (int i = 0; i < n; i++) {
        cnt += (fad[i] / k);
        fad[i] %= k;
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (sum + fad[i] <= k) {
            sum += fad[i];
        } else {
            cnt++;
            sum = fad[i];
        }
    }
    if (sum > 0) {
        cnt++;
    }

    cout << cnt << nl;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}