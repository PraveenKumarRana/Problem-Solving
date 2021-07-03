#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    // Your code goes here.

    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        if (n % 2 == 0 && __builtin_popcount(n) == 1) {
            int x = log2(n);
            if (x % 2 == 0) {
                cout << "Alice\n";
            } else {
                cout << "Bob\n";
            }
        } else if (n % 2 == 0) {
            cout << "Alice\n";
        } else {
            cout << "Bob\n";
        }
    }

    return 0;
}