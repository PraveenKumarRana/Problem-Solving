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
        string s = "";
        while (n > 0) {
            if (n % 2) {
                s += '1';
            } else {
                s += '0';
            }
            n /= 2;
        }
        int k = 0;
        for (int i = 0; i < (s.size() - 1); i++) {
            k += 1 << i;
        }
        cout << k << "\n";
    }

    return 0;
}