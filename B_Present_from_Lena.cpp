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
    int mat[n + 1][2 * n + 1];

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= 2 * n; j++) {
            mat[i][j] = -1;
        }
    }

    int k = n;
    for (int i = 0; i <= n; i++) {
        int x = k;
        for (int j = n; j >= i; j--) {
            mat[i][j] = x;
            x--;
        }
        x = k - 1;
        for (int j = n + 1; j <= 2 * n; j++) {
            mat[i][j] = x;
            x--;
        }
        k--;
    }

    int mvr = n - 1;
    for (int i = n; i >= 0; i--) {
        for (int j = 0; j <= mvr; j++) {
            cout << " ";
        }
        bool flag = true;
        bool ok = true;
        for (int j = 0; j <= 2 * n; j++) {
            if (mat[i][j] < 0 && !flag) {
                break;
            } else if (mat[i][j] < 0) {
                cout << " ";
            } else if (ok) {
                cout << mat[i][j];
                flag = false;
                ok = false;
            } else {
                cout << " " << mat[i][j];
                flag = false;
            }
        }
        cout << nl;
        mvr--;
    }
    mvr = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= mvr; j++) {
            cout << " ";
        }
        bool flag = true;
        bool ok = true;
        for (int j = 0; j <= 2 * n; j++) {
            if (mat[i][j] < 0 && !flag) {
                break;
            } else if (mat[i][j] < 0) {
                cout << " ";
            } else if (ok) {
                cout << mat[i][j];
                flag = false;
                ok = false;
            } else {
                cout << " " << mat[i][j];
                flag = false;
            }
        }
        cout << nl;
        mvr++;
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}