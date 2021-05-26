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
    list<int> l;
    for (int i = 2; i < n; i++) {
        l.push_back(i);
    }

    vi ans;
    ans.push_back(1);
    while (true && l.size()) {
        vi temp;
        int x = n + 1;
        for (list<int>::iterator it = l.begin(); it != l.end(); it++) {
            if (x % (*it) == 0 && x > 0) {
                temp.push_back(*it);
                x /= (*it);
                l.erase(it);
            }
        }
        if (x == 1) {
            for (auto c : temp) ans.push_back(c);
        } else {
            break;
        }
    }

    sort(all(ans));
    cout << ans.size() << nl;
    for (auto c : ans) cout << c << " ";
    cout << nl;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}