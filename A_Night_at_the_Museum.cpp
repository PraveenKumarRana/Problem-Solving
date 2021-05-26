#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

#define nl "\n"
#define vi vector<int>
#define pi pair<int, int>
#define ll long long int
#define all(x) x.begin(), x.end()

int xx = 25;
string t = "bcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz";

int minn(char y) {
    int yyf = 0, yys = xx;
    for (yyf = 0; yyf < t.size(); yyf++) {
        if (y == t[yyf]) {
            break;
        }
    }

    for (yys = xx; yys < t.size(); yys++) {
        if (y == t[yys]) {
            break;
        }
    }

    cout << yyf << " " << xx << " " << yys << nl;

    int diff = 0;
    if (abs(xx - yyf) <= abs(yys - xx)) {
        diff = abs(xx - yyf);
        xx = yyf;
    } else {
        diff = abs(yys - xx);
        xx = yys;
    }

    return diff;
}

void Solve() {
    // Your code goes here.
    string s;
    cin >> s;
    int ans = 0;
    for (int i = 0; i < s.size(); i++) {
        ans += minn(s[i]);
    }
    cout << ans << nl;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}