#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

#define ll long long int
#define all(x) x.begin(), x.end()

const int mod = 1e9 + 7;

template <typename T>
void read(vector<T>& a) {
    for (auto& it : a) cin >> it;
}

void Solve() {
    // Convert your toughts into code here.
    int tt;
    cin >> tt;
    for (int i = 1; i <= tt; i++) {
        int n, c;
        cin >> n >> c;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            a[i] = i + 1;
        }

        bool ok = false;

        int k = n;
        int sum = ((k * (k + 1)) / 2) - 1;
        while (sum >= c) {
            sum -= k;
            k--;
        }

        int cnt = 0;
        int val = 2;
        while (val <= k) {
            a[cnt++] = val;
            val += 2;
        }

        val = 1;
        cnt = k - 1;
        while (val <= k) {
            a[cnt--] = val;
            val += 2;
        }

        vector<int> temp(n);
        for (int j = 0; j < n; j++) temp[j] = a[j];

        int ans = 0;
        for (int pp = 0; pp < n; pp++) {
            int mn = min_element(a.begin() + pp, a.end()) - a.begin();
            ans += mn - pp + 1;
            reverse(a.begin() + pp, a.begin() + mn + 1);
        }

        if (c == (ans - 1)) ok = true;

        // cout << "Temp: ";
        // for (auto p : temp) cout << p << " ";
        // cout << "\n";

        if (ok) {
            cout << "Case #" << i << ": ";
            for (auto p : temp) cout << p << " ";
            cout << "\n";
        } else {
            cout << "Case #" << i << ": IMPOSSIBLE\n";
        }
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}