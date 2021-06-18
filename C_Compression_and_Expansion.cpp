#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    // Your code goes here.

    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        vector<vector<int>> ans;
        vector<int> tmp;
        tmp.push_back(a[0]);
        cout << a[0] << "\n";

        for (int i = 1; i < n; i++) {
            if (a[i] == 1) {
                tmp.push_back(a[i]);
            } else if (a[i] == (a[i - 1] + 1)) {
                tmp.pop_back();
                tmp.push_back(a[i]);
            } else {
                while (tmp.size() > 0) {
                    if (tmp.back() == (a[i] - 1)) {
                        tmp.pop_back();
                        tmp.push_back(a[i]);
                        break;
                    } else {
                        tmp.pop_back();
                    }
                }
            }

            cout << tmp[0];
            for (int j = 1; j < tmp.size(); j++) {
                cout << "." << tmp[j];
            }
            cout << "\n";
        }
    }
    return 0;
}