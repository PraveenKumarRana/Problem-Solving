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
        int n;
        cin >> n;
        vector<int> a(n);
        read(a);

        int ans = 0;
        for (int k = 0; k < n; k++) {
            int mn = min_element(a.begin() + k, a.end()) - a.begin();
            ans += mn - k + 1;
            reverse(a.begin() + k, a.begin() + mn + 1);
        }
        cout << "Case #" << i << ": " << ans - 1 << "\n";
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}