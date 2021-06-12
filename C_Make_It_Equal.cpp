#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    // Your code goes here.

    int n, x;
    cin >> n >> x;
    map<int, int> h;
    int mn = INT_MAX, mx = INT_MIN;
    for (int i = 0; i < n; i++) {
        int p;
        cin >> p;
        mn = min(mn, p);
        mx = max(mx, p);
        h[p]++;
    }

    int sum = 0, prev = 0, cnt = 0;
    for (int i = mx; i > mn; i--) {
        int curr = h[i] + sum + prev;
        if (curr <= x) {
            sum = curr;
            prev += h[i];
        } else {
            cnt++;
            sum = prev + h[i];
            prev += h[i];
        }
    }

    if (sum > 0) cnt++;
    cout << cnt << "\n";
    return 0;
}