#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

#define nl "\n"
#define vi vector<int>
#define pi pair<int, int>
#define ll long long int
#define all(x) x.begin(), x.end()

int pos(int n) {
    string s = "";
    while (n > 0) {
        if (n % 2 == 0) {
            s += '0';
        } else {
            s += '1';
        }
        n /= 2;
    }

    int ans = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '1') {
            ans = (int)pow(2, i);
            break;
        }
    }

    return ans;
}

void Solve() {
    // Your code goes here.
    int s, l;
    cin >> s >> l;
    vi ans;
    for (int i = l; i >= 1; i--) {
        int val = pos(i);
        if ((s - val) >= 0) {
            s -= val;
            ans.push_back(i);
        }
    }

    if (s == 0) {
        cout << ans.size() << nl;
        for (auto c : ans) cout << c << " ";
        cout << nl;
    } else {
        cout << -1 << nl;
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}