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
    int a, b;
    cin >> a >> b;
    int ans = 0;
    while (a > 0 && b > 0) {
        if (a >= b && a >= 2) {
            a -= 2;
            b++;
            ans++;
        } else if (b >= a && b >= 2) {
            b -= 2;
            a++;
            ans++;
        } else {
            break;
        }
    }

    cout << ans << nl;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}