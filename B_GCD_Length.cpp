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
    int pa[9] = {7, 11, 197, 2537, 21012, 281581, 2614159, 10000931, 100111001};
    int pb[9] = {3, 19, 193, 2539, 21013, 281683, 2593697, 10000379, 100060001};
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int g = (int)pow(10, c - 1);
        a -= c;
        b -= c;

        if (a == 0 && b == 0) {
            cout << g << " " << g << nl;
        } else if (a == 0) {
            cout << g << " " << pb[b] * g << nl;
        } else if (b == 0) {
            cout << pa[a] * g << " " << g << nl;
        } else {
            cout << pa[a] * g << " " << pb[b] * g << nl;
        }
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}