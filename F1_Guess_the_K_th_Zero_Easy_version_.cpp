#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

bool query(int l, int r, int k) {
    int sum = r - l + 1;
    cout << "? " << l << " " << r << endl;
    int s;
    cin >> s;
    return s < sum;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    // Your code goes here.

    int n, t;
    cin >> n >> t;
    int l = 1, r = n;
    while (r - l > 1) {
        int m = (l + r) / 2;
        if (query(m, r)) {
            l = m;
        } else {
            r = m - 1;
        }
    }

    cout << "! " << l << endl;

    return 0;
}