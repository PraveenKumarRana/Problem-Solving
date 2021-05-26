#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

#define nl "\n"
#define vi vector<int>
#define pi pair<int, int>
#define ll long long int
#define all(x) x.begin(), x.end()

bool ok(int n, int k) {
    if (180 % n == 0) {
        int ap = 180 / n;
        for (int i = 1; i <= (n - 2); i++) {
            if (ap * i == k) {
                return true;
            }
        }
    }
    return false;
}

void Solve() {
    // Your code goes here.
    int t;
    cin >> t;
    while (t--) {
        int ang;
        cin >> ang;
        int g = gcd(180, ang);
        int k = ang / g;
        int n = 180 / g;

        if (k == n - 1) {
            k *= 2;
            n *= 2;
        }

        cout << n << nl;
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}