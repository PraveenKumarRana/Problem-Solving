#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

#define lli long long int

int main() {
    std::ios_base::sync_with_stdio(false);
    // Your code goes here.

    lli t;
    cin >> t;
    while (t--) {
        lli a, b, q;
        cin >> a >> b >> q;

        lli mn = min(a, b);
        lli mx = max(a, b);
        a = mn, b = mx;

        lli lm = lcm(a, b);

        while (q--) {
            lli l, r;
            cin >> l >> r;
            lli ans = 0;
            lli prel = l, prer = r;

            lli ll = lcm(l, r);
            while (l % ll != 0 && l < r) {
                if ((l % a) % b == (l % b) % a) {
                    ans++;
                }
                l++;
            }

            while (r % ll != 0 && r > l) {
                if ((r % a) % b == (r % b) % a) {
                    ans++;
                }
                r--;
            }

            // cout << "Ans, l, r: " << l << " - " << r << "\n";

            ans += ((r - l + 1) / ll) * a;
            if (l == r) {
                ans += ((r % a) % b == (r % b) % a);
            }
            cout << max(0ll, (prer - prel + 1) - ans) << " ";
        }
        cout << "\n";
    }

    return 0;
}