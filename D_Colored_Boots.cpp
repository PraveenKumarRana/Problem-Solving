#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    // Your code goes here.

    int n;
    cin >> n;
    string l, r;
    cin >> l >> r;
    map<char, set<int>> mpl, mpr;

    for (int i = 0; i < n; i++) {
        mpl[l[i]].insert(i);
    }

    for (int i = 0; i < n; i++) {
        mpr[r[i]].insert(i);
    }

    vector<pair<int, int>> ans;
    for (char i = 'a'; i <= 'z'; i++) {
        while (mpl[i].size() > 0 && mpr[i].size() > 0) {
            ans.push_back({*mpl[i].begin(), *mpr[i].begin()});
            mpl[i].erase(mpl[i].begin());
            mpr[i].erase(mpr[i].begin());
        }
    }

    for (char i = 'a'; i <= 'z'; i++) {
        while (mpl[i].size() > 0 && mpr['?'].size() > 0) {
            ans.push_back({*mpl[i].begin(), *mpr['?'].begin()});
            mpl[i].erase(mpl[i].begin());
            mpr['?'].erase(mpr['?'].begin());
        }
    }

    for (char i = 'a'; i <= 'z'; i++) {
        while (mpl['?'].size() > 0 && mpr[i].size() > 0) {
            ans.push_back({*mpl['?'].begin(), *mpr[i].begin()});
            mpl['?'].erase(mpl['?'].begin());
            mpr[i].erase(mpr[i].begin());
        }
    }

    for (char i = 'a'; i <= 'z'; i++) {
        while (mpl['?'].size() > 0 && mpr['?'].size() > 0) {
            ans.push_back({*mpl['?'].begin(), *mpr['?'].begin()});
            mpl['?'].erase(mpl['?'].begin());
            mpr['?'].erase(mpr['?'].begin());
        }
    }

    cout << ans.size() << "\n";
    for (auto c : ans) {
        cout << c.first + 1 << " " << c.second + 1 << "\n";
    }

    return 0;
}