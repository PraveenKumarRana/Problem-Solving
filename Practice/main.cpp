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
    if (n <= 3 && n > 1)
        cout << "NO SOLUTION" << nl;
    else {
        for (int i = 2; i <= n; i += 2) {
            cout << i << " ";
        }
        for (int i = 1; i <= n; i += 2) {
            cout << i << " ";
        }
        cout << nl;
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}