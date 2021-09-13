// Author: Praveen Kumar Rana
// Date: 17-07-2021 (20:35:49)

#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

#define NL "\n"
#define int long long int
#define all(x) x.begin(), x.end()
const int mod = 1e9 + 7;

void solve() {
    // Write your code here.
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        sort(all(a), greater<int>());
        sort(all(b), greater<int>());

        multiset<int> aa, bb;

        int sum = 0, ilsum = 0;
        int k = n - (n / 4);
        for (int i = 0; i < k; i++) {
            sum += a[i], ilsum += b[i];
            aa.insert(a[i]), bb.insert(b[i]);
        }

        int pren = n;

        while (sum < ilsum) {
            // cout << "Infinite" << NL;
            n++;
            sum += 100;
            aa.insert(100);
            int v = n - (n / 4);
            if (v == k) {
                sum -= *aa.begin();
                aa.erase(aa.begin());
            } else {
                for (int i = k; i < min(pren, v); i++) {
                    ilsum += b[i];
                }
            }
            k = v;
        }

        cout << n - pren << NL;
    }
}

int32_t main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    solve();
    return 0;
}