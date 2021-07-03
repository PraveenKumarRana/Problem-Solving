#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    // Your code goes here.

    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m), ans(m);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];

    int i = 0, j = 0, k = 0;
    while (i < n && j < m) {
        if (a[i] < b[j]) {
            i++;
        } else {
            j++;
        }
        ans[j] = i;
    }

    while (j < m) {
        ans[j++] = i;
    }

    for (auto c : ans) cout << c << " ";
    cout << "\n";

    return 0;
}