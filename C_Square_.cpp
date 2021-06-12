#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    // Your code goes here.

    int tt;
    cin >> tt;
    while (tt--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if ((a == c && (b + d) == c) || (a == d && (b + c) == d) ||
            ((b == d) && (a + c) == d) || ((b == c) && (a + d) == b)) {
            cout << "Yes"
                 << "\n";
        } else {
            cout << "No"
                 << "\n";
        }
    }

    return 0;
}