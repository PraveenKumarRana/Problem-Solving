#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    // Your code goes here.

    int tt;
    cin >> tt;
    while (tt--) {
        string s;
        cin >> s;
        int cnt = 0;
        while (true && s.size() > 1) {
            bool f = false;
            for (int i = s.size() - 1; i > 0; i--) {
                if (s[i] != s[i - 1]) {
                    s.erase(s.begin() + i);
                    s.erase(s.begin() + i - 1);
                    i--;
                    cnt++;
                    f = true;
                    break;
                }
            }
            if (!f) {
                break;
            }
        }

        if (cnt % 2 == 0)
            cout << "NET"
                 << "\n";
        else
            cout << "DA"
                 << "\n";
    }

    return 0;
}