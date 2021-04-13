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
    sort(all(s));

    vector<string> a;
    do {
        a.push_back(s);
    } while (next_permutation(all(s)));

    cout << a.size() << nl;
    for (auto c : a) cout << c << nl;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}