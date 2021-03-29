// author: @iamyours

#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

#define NL "\n"
#define int long long int
#define vi vector<int>
#define pi pair<int, int>
#define all(x) x.begin(), x.end()
#define tc    \
    int t;    \
    cin >> t; \
    while (t--)

const int mod = 1e9 + 7;

template <typename T>
void read(vector<T> &a) {
    for (auto &it : a) cin >> it;
}

void Solve() {
    // Convert your toughts into code here.
    tc {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++) {
            if (s[i] == '*') {
                s[i] = 'x';
                break;
            }
        }

        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == '*') {
                s[i] = 'x';
                break;
            }
        }

        stack<int> ans, poss;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'x') {
                ans.push(i);
            } else if (s[i] == '*' && (i - ans.top()) <= k) {
                poss.push(i);
            } else if (!ans.empty() && (i - ans.top()) > k && !poss.empty()) {
                s[poss.top()] = 'x';
                ans.push(poss.top());
            } else {
                continue;
            }
        }

        int cnt = 0;
        for (auto c : s)
            if (c == 'x') cnt++;

        cout << cnt << NL;
    }
}

int32_t main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}