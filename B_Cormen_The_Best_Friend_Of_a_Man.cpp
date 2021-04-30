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

    if (n == 1) {
        cout<<0<<nl;
        cout << a[0] << nl;
    } else {
        int sum = 0;
        for (int i = 1; i < n; i++) {
            if ((a[i] + a[i - 1]) < k) {
                sum += k - (a[i] + a[i - 1]);
                a[i] += (k - (a[i] + a[i - 1]));
            }
        }

        cout << sum << nl;
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << nl;
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}