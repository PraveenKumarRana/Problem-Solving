#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

#define ll long long int
#define all(x) x.begin(), x.end()

void Solve() {
    // Your code goes here.
    ll n;
    cin >> n;
    while (n != 1) {
        cout << n << " ";
        if (n % 2 == 0)
            n /= 2;
        else {
            n *= 3;
            n += 1;
        }
    }
    cout << n << "\n";
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}