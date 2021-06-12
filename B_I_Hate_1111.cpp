#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

bool ok(int x) {
    for (int i = 0; i <= 100; i++) {
        for (int j = 0; j <= 100; j++) {
            if (x == (i * 11 + j * 111)) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    // Your code goes here.

    int tt;
    cin >> tt;
    while (tt--) {
        int x;
        cin >> x;
        if (x >= 1100 || ok(x)) {
            cout << "YES"
                 << "\n";
        } else {
            cout << "NO"
                 << "\n";
        }
    }

    return 0;
}