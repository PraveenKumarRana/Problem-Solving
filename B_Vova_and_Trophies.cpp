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
    string s;
    cin >> s;
    stack<char> st;
    vi l(n, 0), r(n, 0);
    for (int i = 0; i < n; i++) {
        if (s[i] == 'G') {
            l[i] = 1;
            if (i > 0) l[i] += l[i - 1];
        }
    }

    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == 'G') {
            r[i] = 1;
            if ((i + 1) < n) r[i] += r[i + 1];
        }
    }

    int tg = 0;

    for (auto c : s) {
        tg += c == 'G';
    }

    int mx = *max_element(all(l));
    for (int i = 1; i < n - 1; i++) {
        if (s[i] == 'S') {
            mx = max(mx, l[i - 1] + r[i + 1] + 1);
        }
    }

    // Handles cases such as GGGSSS or SSSGGG
    mx = min(mx, tg);

    cout << mx << nl;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}