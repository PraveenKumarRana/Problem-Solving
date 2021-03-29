#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

#define ll long long int
#define all(x) x.begin(), x.end()

void Solve() {
    // Your code goes here.
    int n;
    cin >> n;
    int ans = 1;
    for (int i = 2; i <= n; i++) ans ^= i;
    for (int i = 1; i < n; i++) {
        int x;
        cin >> x;
        ans ^= x;
    }

    cout << ans << "\n";
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}