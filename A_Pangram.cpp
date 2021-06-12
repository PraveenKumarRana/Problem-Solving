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
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    set<char> st;
    for (auto c : s) st.insert(c);

    if (st.size() == 26) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}