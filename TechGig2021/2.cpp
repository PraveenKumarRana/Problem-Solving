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
    int n = 1e6 + 1;
    vector<char> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= n; i++) {
        if (is_prime[i] && (long long)i * i <= n) {
            for (int j = i * i; j <= n; j += i) is_prime[j] = false;
        }
    }

    vi primes;
    for (int i = 2; i <= n; i++) {
        if (is_prime[i]) primes.push_back(i);
    }

    int tt;
    cin >> tt;
    while (tt--) {
        int l, r;
        cin >> l >> r;
        int mn = INT_MAX, mx = INT_MIN;

        for (int i = 0; i < primes.size(); i++) {
            if (primes[i] >= l && primes[i] <= r) {
                mn = min(mn, primes[i]);
                mx = max(mx, primes[i]);
            }
        }

        if (mn != INT_MAX && mx != INT_MIN) {
            cout << mx - mn << nl;
        } else {
            cout << -1 << nl;
        }
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}