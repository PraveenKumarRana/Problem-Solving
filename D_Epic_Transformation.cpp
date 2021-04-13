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
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        map<int, int> mp;
        set<int> st;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            mp[x]++;
            st.insert(x);
        }

        vi cnt;
        for (auto c : st) cnt.push_back(mp[c]);
        sort(all(cnt), greater<int>());

        for (int i = 0; i < cnt.size(); i++) {
            int sum = 0;
            for (int j = i + 1; j < cnt.size(); j++) {
                sum += cnt[j];
            }
            while (sum > 0 && cnt[i] > 0) {
                sum = 0;
                for (int j = i + 1; j < cnt.size(); j++) {
                    if (cnt[j] > 0 && cnt[i] > 0) {
                        cnt[j]--;
                        cnt[i]--;
                    }
                    if (cnt[i] == 0) {
                        break;
                    }
                }

                for (int j = i + 1; j < cnt.size(); j++) {
                    sum += cnt[j];
                }
            }
        }

        int ans = 0;
        for (int i = 0; i < cnt.size(); i++) {
            ans += cnt[i];
        }

        cout << ans << nl;
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}