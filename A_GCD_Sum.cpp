#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

#define nl "\n"
#define vi vector<int>
#define pi pair<int, int>
#define ll long long int
#define all(x) x.begin(), x.end()

ll sum(ll n) {
    ll s = 0;
    while (n > 0) {
        s += n % 10;
        n /= 10;
    }
    return s;
}

void Solve() {
    // Your code goes here.
    ll tt;
    cin >> tt;
    while (tt--) {
        ll n;
        cin >> n;
        while (gcd(n, sum(n)) == 1) {
            n++;
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