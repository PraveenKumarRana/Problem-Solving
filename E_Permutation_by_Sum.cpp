#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

#define nl "\n"
#define vi vector<int>
#define pi pair<int, int>
#define ll long long int
#define all(x) x.begin(), x.end()

pair<int, int> get_num(vi &a, int x) {
    map<int, int> mp;
    for (int i = 0; i < a.size(); i++) {
        mp[a[i]]++;
    }

    for (int i = 0; i < a.size(); i++) {
        int y = a[i];
        if (mp[x - y] > 0 && x != a[i]) {
            vi::iterator it = lower_bound(a.begin(), a.end(), y);
            a.erase(it);
            it = lower_bound(a.begin(), a.end(), x - y);
            a.erase(it);
            return {y, x - y};
        }
    }
    return {0, 0};
}

void Solve() {
    // Your code goes here.
    int t;
    cin >> t;
    while (t--) {
        int n, l, r, s;
        cin >> n >> l >> r >> s;
        vi a;
        for (int i = 1; i <= n; i++) {
            a.push_back(i);
        }

        priority_queue<int> nums;
        for (int i = n; i >= 1; i++) {
            if (s - i >= 0) {
                nums.push(i);
                vi::iterator it = lower_bound(a.begin(), a.end(), i);
                a.erase(it);
            }
        }

        int len = r - l + 1;

        while (nums.size() < len) {
            int t = nums.top();
            pair<int, int> val = get_num(a, t);

            nums.push(val.first);
            nums.push(val.second);
        }
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}