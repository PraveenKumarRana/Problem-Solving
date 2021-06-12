#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    // Your code goes here.
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector<int> a(2 * n), b(2 * n);
        for (int i = 0; i < 2 * n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        for (int i = 0; i < n; i++) {
            b[2 * i] = a[i];
        }
        int k = 0;
        for (int i = 2 * n - 1; i >= n; i--) {
            b[2 * k + 1] = a[i];
            k++;
        }

        for (auto c : b) cout << c << " ";
        cout << "\n";
    }

    return 0;
}