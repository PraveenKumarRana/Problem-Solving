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
        string s;
        cin >> s;
        string t = "()", u = "()", v = "()";

        bool ok = false;

        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                for (int k = 0; k < 2; k++) {
                    string tem = "";
                    for (auto c : s) {
                        if (c == 'A') tem += t[i];
                        if (c == 'B') tem += u[j];
                        if (c == 'C') tem += v[k];
                    }

                    // cout << "Tem: " << tem << nl;

                    stack<char> st;
                    for (auto c : tem) {
                        if (st.empty()) {
                            st.push(c);
                        } else if (st.top() == '(' && c == ')') {
                            st.pop();
                        } else {
                            st.push(c);
                        }
                    }

                    if (st.size() == 0) {
                        ok = true;
                    }
                }
            }
        }

        if (ok)
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}