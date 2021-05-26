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
    string s;
    cin >> s;
    int a = 0, d = 0;
    for (auto c : s) {
        if (c == 'A')
            a++;
        else
            d++;
    }

    if (a > d) {
        cout << "Anton" << nl;
    } else if (a == d) {
        cout << "Friendship" << nl;
    } else {
        cout << "Danik" << nl;
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}