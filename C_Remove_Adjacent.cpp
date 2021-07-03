#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    // Your code goes here.

    int n;
    cin >> n;
    string s;
    cin >> s;

    int presize = s.size();

    while (true) {
        for (int k = 0; k < n; k++) {
            for (int i = 1; i < s.size(); i++) {
                if ((s[i - 1] - 'a' + 1) == (s[i] - 'a')) {
                    int j = i;
                    while (j < s.size() &&
                           (s[j - 1] - 'a' + 1) == (s[j] - 'a')) {
                        j++;
                    }
                    j--;
                    s.erase(s.begin() + j);
                    break;
                }
            }
        }

        // cout << s << "\n";

        for (int k = 0; k < n; k++) {
            for (int i = 1; i < s.size(); i++) {
                if ((s[i - 1] - 'a') == (s[i] - 'a' + 1)) {
                    s.erase(s.begin() + i - 1);
                    break;
                }
            }
        }

        if (presize == s.size()) {
            break;
        } else {
            presize = s.size();
        }
    }

    cout << n - (int)s.size() << "\n";

    return 0;
}