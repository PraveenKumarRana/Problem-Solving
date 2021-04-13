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
    int t;
    cin >> t;

    int pow[31];
    pow[0] = 1;
    for (int i = 1; i < 31; i++) pow[i] = pow[i - 1] * 2;

    while (t--) {
        int n, k;
        cin >> n >> k;
        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            mp[x]++;
        }

        int kk = k;
        string bit = "";
        while (k > 0) {
            if (k % 2 == 0)
                bit += '0';
            else
                bit += '1';
            k /= 2;
        }

        // cout << "Hello" << nl;
        int ans = 0;
        while (n > 0) {
            int sum = 0;
            // cout << "n: " << n << nl;
            for (int i = 31; i >= 0; i--) {
                while (sum < kk && mp[pow[i]] > 0) {
                    // cout << "sum, i: " << sum << " " << i << nl;
                    if (sum + (1 << i) <= kk) {
                        sum += (1 << i);
                        mp[pow[i]]--;
                        n--;
                    } else {
                        break;
                    }
                }
            }
            if (sum > 0) {
                ans++;
            }
        }

        cout << ans << nl;
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}