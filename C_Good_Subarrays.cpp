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
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> a(n);
        for (int i = 0; i < n; i++) a[i] = s[i] - '0' - 1;

        map<int, int> mp;
        ll ans = 0;

        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += a[i];
            ans += mp[i];
            mp[sum]++;
        }

        cout << ans << "\n";
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}