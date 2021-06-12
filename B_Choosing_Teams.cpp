#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    // Your code goes here.

    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end());

    int cnt = 0;
    for (int i = 2; i < n; i += 3) {
        if (a[i] + k <= 5) {
            cnt++;
        }
    }

    cout << cnt << "\n";

    return 0;
}