#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    // Your code goes here.

    int n, k;
    cin >> n >> k;
    int ans = 0;
    int tt = 240 - k;
    for (int i = 1; i <= n; i++) {
        if ((tt - 5 * i) >= 0) {
            tt -= 5 * i;
            ans++;
        }
    }

    cout << min(n, ans) << "\n";

    return 0;
}