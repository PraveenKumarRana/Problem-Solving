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

bool check(string s, int a, int b, int n) {
    bool ok = true;
    for (int i = 0; i < (n / 2); i++) {
        if (s[i] != s[n - i - 1]) {
            ok = false;
            break;
        }
        if (s[i] == '0') {
            a -= 2;
        } else {
            b -= 2;
        }
    }

    if (n % 2 == 1) {
        if (s[n / 2] == '0') {
            a -= 1;
        } else if (s[n / 2] == '1') {
            b -= 1;
        } else {
            ok = false;
        }
    }

    return ok && (a == 0) && (b == 0);
}

void Solve() {
    // Your code goes here.
    int t;
    cin >> t;
    while (t--) {
        int one, zero;
        cin >> zero >> one;
        string palin;
        cin >> palin;

        int n = palin.size();
        int a = zero, b = one;

        // cout << "Input: " << palin << nl;

        for (int i = 0; i < n; i++) {
            if (palin[i] == '0')
                zero--;
            else if (palin[i] == '1')
                one--;
        }

        for (int i = 0; i < (n / 2); i++) {
            if (palin[i] == '1' && palin[n - i - 1] == '?') {
                palin[n - i - 1] = '1';
                one -= 1;
            } else if (palin[i] == '0' && palin[n - i - 1] == '?') {
                palin[n - i - 1] = '0';
                zero -= 1;
            } else if (palin[i] == '?' && palin[n - i - 1] == '1') {
                palin[i] = '1';
                one -= 1;
            } else if (palin[i] == '?' && palin[n - i - 1] == '0') {
                palin[i] = '0';
                zero -= 1;
            } else if (palin[i] == '?' && palin[n - i - 1] == '?') {
                if (zero >= 2) {
                    // cout << "Inside" << nl;
                    palin[n - i - 1] = '0';
                    palin[i] = '0';
                    zero -= 2;
                } else if (one >= 2) {
                    palin[n - i - 1] = '1';
                    palin[i] = '1';
                    one -= 2;
                }
            }
        }

        if (n % 2 == 1) {
            if (palin[n / 2] == '?') {
                if (zero > 0) {
                    palin[n / 2] = '0';
                    zero--;
                } else if (one > 0) {
                    palin[n / 2] = '1';
                    one--;
                }
            }
        }

        // cout << "Output: " << palin << nl;

        if (check(palin, a, b, n)) {
            cout << palin << nl;
        } else {
            cout << -1 << nl;
        }
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}