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

bool inside(int i, int l, int r) { return i >= l && i < r; }

int cost(string s, int n, int x, int y) {
    int cst = 0;
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == 'C' && s[i + 1] == 'J') {
            cst += x;
        }
        if (s[i] == 'J' && s[i + 1] == 'C') {
            cst += y;
        }
    }

    return cst;
}

void Solve() {
    // Convert your toughts into code here.
    int tt;
    cin >> tt;
    for (int i = 1; i <= tt; i++) {
        int x, y;
        cin >> x >> y;
        string s;
        cin >> s;

        int n = s.size();
        bool ok = true;
        for (int j = 0; j < n; j++) {
            if (s[j] == 'C' || s[j] == 'J') {
                ok = false;
                int k = j - 1;
                while (k > 0 && s[k] == '?') {
                    s[k--] = s[j];
                }
                k = j + 1;
                while (k < n && s[k] == '?') {
                    s[k++] = s[j];
                }
            }
        }

        int ans = 0;
        if (!ok) {
            ans = cost(s, n, x, y);
        }
        cout << "Case #" << i << ": " << ans << "\n";
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}