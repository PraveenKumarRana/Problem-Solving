#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

#define nl "\n"
#define vi vector<int>
#define pi pair<int, int>
#define ll long long int
#define all(x) x.begin(), x.end()

bool found(string &v, string s) {
    int i = 0;
    for (int j = 0; j < v.size(); j++) {
        if (i < s.size() && s[i] == v[j]) {
            i++;
        }
    }

    return i == (int)s.size();
}

void Solve() {
    // Your code goes here.
    string v;
    cin >> v;
    int tt;
    cin >> tt;
    while (tt--) {
        string s;
        cin >> s;
        if (found(v, s)) {
            cout << "POSITIVE" << nl;
        } else {
            cout << "NEGATIVE" << nl;
        }
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}