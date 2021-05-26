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
        int n;
        cin >> n;
        bool ans = false;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            int sq = (int)sqrt(x);
            if ((sq * sq) != x) {
                ans = true;
            }
        }

        if (ans)
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}