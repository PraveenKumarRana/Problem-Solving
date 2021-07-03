#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    // Your code goes here.

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    queue<int> q;
    map<int, int> mp;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (q.empty()) {
            q.push(a[i]);
            mp[a[i]] = 1;
        } else if (a[i - 1] == a[i]) {
            q.push(a[i]);
        } else {
            if (mp[a[i]]) {
                while (!q.empty() && q.front() != a[i]) {
                    q.pop();
                }
                while (!q.empty() && q.front() == a[i]) {
                    q.pop();
                }
                q.push(a[i]);
            } else {
                q.push(a[i]);
                mp[a[i]] = 1;
            }
        }
        ans = max(ans, (int)q.size());
    }

    cout << ans << "\n";
    return 0;
}