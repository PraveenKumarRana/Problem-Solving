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
    int t;
    cin >> t;
    while (t--) {
        int n, l, r;
        cin >> n >> l >> r;
        vi ls(l), rs(r);
        for (int i = 0; i < l; i++) cin >> ls[i];
        for (int i = 0; i < r; i++) cin >> rs[i];

        map<int, int> mls;
        for (auto c : ls) mls[c]++;

        vi nf;
        for (auto c : rs) {
            if (mls[c]) {
                mls[c]--;
                l--;
            } else {
                nf.push_back(c);
            }
        }

        vi nlf;
        for (auto c : mls) {
            while (c.second > 0) {
                nlf.push_back(c.first);
                c.second--;
            }
        }

        sort(all(nf));
        sort(all(nlf));

        if (nf.size() > nlf.size()) {
            stack<int> st;
            int cnt = 0;
            for (auto c : nf) {
                if (!st.empty() && st.top() == c) {
                    st.pop();
                    cnt++;
                } else {
                    st.push(c);
                }
            }
            int diff = min(nf.size(), nlf.size());
            int rest = nf.size() - diff - 2 * cnt;
            if (rest > 0) {
                cout << diff + rest + cnt << nl;
            } else {
                cout << diff + (nf.size() - diff) / 2 << nl;
            }
        } else if (nf.size() == nlf.size()) {
            cout << nf.size() << nl;
        } else {
            stack<int> st;
            int cnt = 0;
            for (auto c : nlf) {
                if (!st.empty() && st.top() == c) {
                    st.pop();
                    cnt++;
                } else {
                    st.push(c);
                }
            }

            int diff = min(nf.size(), nlf.size());
            int rest = nlf.size() - diff - 2 * cnt;
            if (rest > 0) {
                cout << diff + rest + cnt << nl;
            } else {
                cout << diff + (nlf.size() - diff) / 2 << nl;
            }
        }
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}