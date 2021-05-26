#include <algorithm>
#include <iostream>
#include <vector>
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
        vi a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int num = a[0], ind = 0;
        if (a[0] == a[1]) {
            for (int i = 1; i < n; i++) {
                if (a[0] != a[i]) {
                    num = a[i];
                    ind = i;
                    break;
                }
            }
        } else {
            if (a[0] == a[2]) {
                num = a[1];
                ind = 1;
            } else {
                num = a[0];
                ind = 0;
            }
        }

        cout << ind + 1 << nl;
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}