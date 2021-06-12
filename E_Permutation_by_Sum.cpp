#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

bool possible(long long int k, long long int n, long long int s) {
    long long int lsum = 0, rsum = 0;
    for (long long int i = 1; i <= k; i++) lsum += i;
    for (long long int i = n; i >= 0; i--) {
        if (k > 0) {
            rsum += i;
            k--;
        }
    }

    if (s < lsum || s > rsum) {
        return false;
    }
    return true;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    // Your code goes here.

    long long int tt;
    cin >> tt;
    while (tt--) {
        long long int n, l, r, s;
        cin >> n >> l >> r >> s;

        long long int k = r - l + 1;
        if (!possible(k, n, s)) {
            cout << -1 << "\n";
            continue;
        }

        vector<long long int> nums, used(n + 1, 0);
        for (long long int i = n; i >= 1; i--) {
            if (s - i >= 0 && possible(k - 1, i - 1, s - i)) {
                nums.push_back(i);
                used[i] = 1;
                s -= i;
                k--;
            }
            if (s == 0) {
                break;
            }
        }

        if (s != 0) {
            cout << -1 << "\n";
            continue;
        }

        vector<long long int> ans;
        for (long long int i = 1; i <= n; i++) {
            if (!used[i]) ans.push_back(i);
        }

        l--;
        for (auto c : nums) ans.insert(ans.begin() + l, c);

        for (auto c : ans) cout << c << " ";
        cout << "\n";
    }
    return 0;
}