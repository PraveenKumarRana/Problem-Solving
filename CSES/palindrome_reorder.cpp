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
    string s;
    cin >> s;
    map<char, int> mp;
    set<char> st;
    for (auto c : s) {
        mp[c]++;
        st.insert(c);
    }

    int odd = 0;
    for (auto c : st) {
        if (mp[c] % 2) odd++;
    }

    if (odd == 0) {
        string pre = "", suf = "";
        for (auto c : st) {
            while (mp[c] > 0) {
                mp[c] -= 2;
                pre += c;
                suf += c;
            }
        }
        reverse(all(suf));
        cout << pre + suf << nl;
    } else if (odd == 1) {
        string pre = "", suf = "";
        for (auto c : st) {
            if (mp[c] % 2 == 0) {
                while (mp[c] > 0) {
                    mp[c] -= 2;
                    pre += c;
                    suf += c;
                }
            }
        }

        for (auto c : st) {
            if (mp[c] % 2) {
                int x = 0;
                while (mp[c] > 0) {
                    if (x % 2 == 0) {
                        pre += c;
                        mp[c]--;
                    } else {
                        suf += c;
                        mp[c]--;
                    }
                }
                break;
            }
        }
        reverse(all(suf));
        cout << pre + suf << nl;
    } else {
        cout << "NO SOLUTION" << nl;
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}