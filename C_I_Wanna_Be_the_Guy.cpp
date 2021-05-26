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
    int n;
    cin >> n;
    set<int> st;
    int k;
    cin >> k;
    for (int i = 0; i < k; i++) {
        int x;
        cin >> x;
        st.insert(x);
    }

    cin >> k;
    for (int i = 0; i < k; i++) {
        int x;
        cin >> x;
        st.insert(x);
    }

    if (st.size() == n) {
        cout << "I become the guy." << nl;
    } else {
        cout << "Oh, my keyboard!" << nl;
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}