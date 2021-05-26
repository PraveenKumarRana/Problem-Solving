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
    while (t--) {
        int k;
        cin >> k;
        bool ok = false;
        for (int i = 1; i <= 100; i++) {
            for (int j = 0; j <= 100; j++) {
                if ((i * 100) == (i + j) * k) {
                    cout << (i + j) << nl;
                    ok = true;
                    break;
                }
            }
            if (ok) {
                break;
            }
        }
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}