#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

bool is_prime(int n) {
    for (int i = 2; (i * i) <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    // Your code goes here.

    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;

        int x = n;
        while (!is_prime(x) || is_prime(x - n + 1)) {
            x++;
        }

        int mat[n][n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                mat[i][j] = 1;
            }
        }

        int p = (x - n + 1);

        for (int j = 0; j < n; j++) {
            mat[j][j] = p;
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << mat[i][j] << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}