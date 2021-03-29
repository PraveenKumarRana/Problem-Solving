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
    while (tt--) {
        int n, k;
        cin >> n >> k;
        vector<int> ans;
        for (int i = k + 1; i <= n; i++) ans.push_back(i);
        for (int i = ((k + 1) / 2); i < k; i++) ans.push_back(i);

        cout << ans.size() << "\n";
        if (ans.size()) {
            for (auto c : ans) cout << c << " ";
            cout << "\n";
        }
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}