#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

#define ll long long int

int main() {
    std::ios_base::sync_with_stdio(false);
    // Your code goes here.

    ll n;
    cin >> n;
    ll x = 0;
    ll mult = 1;
    stack<ll> st;

    bool over = false;

    for (ll i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (s == "for") {
            ll y;
            cin >> y;
            st.push(y);
            mult *= y;
        } else if (s == "add") {
            x += mult;
        } else {
            mult /= st.top();
        }
    }

    cout << x << "\n";

    return 0;
}