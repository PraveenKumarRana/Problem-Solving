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
    string b;
    cin >> b;
    n--;
    int cnt = 0;
    while (n--) {
        string c;
        cin >> c;
        if (b[1] == c[0]) {
            b = c;
            cnt++;
        }
    }

    cout << cnt + 1 << nl;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}