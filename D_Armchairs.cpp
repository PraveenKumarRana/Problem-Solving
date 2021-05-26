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
    vi a(n);
    list<int> used;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i]) {
            used.push_back(i);
        }
    }

    int ans = 0;

    bool ok = true;
    while (used.size() > 0) {
        int i;
        if (ok) {
            i = used.front();
            used.pop_front();
            ok = false;
        } else {
            i = used.back();
            used.pop_back();
            ok = true;
        }

        int x = -1, y = -1;
        for (int j = i - 1; j >= 0; j--) {
            if (a[j] == 0) {
                x = j;
                break;
            }
        }
        for (int j = i + 1; j < n; j++) {
            if (a[j] == 0) {
                y = j;
                break;
            }
        }

        if (x != -1 && y != -1) {
            if (abs(i - x) < abs(y - i)) {
                ans += abs(i - x);
                a[x] = 1;
            } else {
                ans += abs(y - i);
                a[y] = 1;
            }
        } else if (x != -1) {
            ans += abs(i - x);
            a[x] = 1;
        } else if (y != -1) {
            ans += abs(y - i);
            a[y] = 1;
        } else {
            continue;
        }
    }

    cout << ans << nl;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}