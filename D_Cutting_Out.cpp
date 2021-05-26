#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

#define nl "\n"
#define vi vector<int>
#define pi pair<int, int>
#define ll long long int
#define all(x) x.begin(), x.end()

vi t;
int n, k;
map<int, int> mp;

bool check(int m) {
    t.clear();
    for (int i = 0; i < 200001; i++) {
        int need = min(mp[i] / m, k - int(t.size()));
        for (int j = 0; j < need; j++) {
            t.push_back(i);
        }
    }

    return int(t.size()) == k;
}

void Solve() {
    // Your code goes here.

    cin >> n >> k;
    vi a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]]++;
    }

    int l = 0, r = n;
    while (r - l > 1) {
        int m = (l + r)>>1;
        if (check(m)) {
            l = m;
        } else {
            r = m;
        }
    }

    if (!check(r)) check(l);
    for (auto c : t) cout << c << " ";
    cout << nl;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}