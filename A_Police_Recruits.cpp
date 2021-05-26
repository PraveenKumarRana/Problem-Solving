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
    int n;
    cin >> n;
    int re = 0;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x > 0) {
            re += x;
        } else {
            if (re > 0) {
                re--;
            } else {
                ans++;
            }
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