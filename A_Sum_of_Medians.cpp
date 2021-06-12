#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    // Your code goes here.

    int tt;
    cin >> tt;
    while (tt--) {
        int n, k;
        cin >> n >> k;
        int sum = 0;
        for (int i = 0; i < k; i++) {
            vector<int> vi(n);
            for (int j = 0; j < n; j++) cin >> vi[j];
            sort(vi.begin(), vi.end());
            sum += vi[(n + 1) / 2];
        }

        cout << sum << "\n";
    }

    return 0;
}