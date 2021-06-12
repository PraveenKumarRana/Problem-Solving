#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

int largest_prefix_suffix(string str) {
    int n = str.length();
    int arr[n];
    arr[0] = 0;
    int len = 0;
    for (int i = 1; i < n;) {
        if (str[len] == str[i]) {
            len++;
            arr[i++] = len;
        } else {
            if (len != 0) {
                len = arr[len - 1];
            } else {
                arr[i] = 0;
                i++;
            }
        }
    }
    return arr[n - 1];
}

int main() {
    std::ios_base::sync_with_stdio(false);
    // Your code goes here.

    string s, t;
    cin >> s >> t;

    int x = largest_prefix_suffix(t);
    t = t.substr(0, (int)t.size() - x);

    string ans = s;
    for (int i = 0; i < s.size(); i++) {
        ans[i] = t[i % (int)t.size()];
    }

    int cnts = 0, cntans = 0;

    for (auto c : s) cnts += (c == '0');
    for (auto c : ans) cntans += (c == '0');

    if (cntans < cnts) {
        reverse(ans.begin(), ans.end());
        for (int i = 0; i < ans.size(); i++) {
            if (cntans < cnts && ans[i] == '1') {
                ans[i] = '0';
                cntans++;
            }
        }
    } else {
        reverse(ans.begin(), ans.end());
        for (int i = 0; i < ans.size(); i++) {
            if (cntans > cnts && ans[i] == '0') {
                ans[i] = '1';
                cntans--;
            }
        }
    }

    reverse(ans.begin(), ans.end());
    cout << ans << "\n";

    return 0;
}