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
    int tt;
    cin >> tt;
    while (tt--) {
        int n, k;
        cin >> n >> k;

        if (n & 1) {
            cout << 1 << " " << n / 2 << " " << n / 2 << nl;
        } else {
            if (n % 4 == 0) {
                cout << n / 2 << " " << n / 4 << " " << n / 4 << nl;
            } else {
                cout << n / 2 - 1 << " " << n / 2 - 1 << " " << 2 << nl;
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