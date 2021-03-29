#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

#define ll long long int
#define all(x) x.begin(), x.end()

void Solve() {
    // Your code goes here.
    string s;
    cin >> s;
    int ans = 0, a = 0, g = 0, c = 0, t = 0;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'A') {
            a++, g = 0, c = 0, t = 0;
        } else if (s[i] == 'C') {
            a = 0, g = 0, c++, t = 0;
        } else if (s[i] == 'G') {
            a = 0, g++, c = 0, t = 0;
        } else {
            a = 0, g = 0, c = 0, t++;
        }

        ans = max({ans, a, c, g, t});
    }

    cout << ans << "\n";
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}