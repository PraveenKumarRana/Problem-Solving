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
        string s;
        cin >> s;
        int cnt = 0;
        for (auto c : s) cnt += (c == '0');

        if (cnt % 2 == 0) {
            cout << "BOB\n";
        } else {
            if (cnt == 1) {
                cout << "BOB\n";
            } else {
                cout << "ALICE\n";
            }
        }
    }

    return 0;
}