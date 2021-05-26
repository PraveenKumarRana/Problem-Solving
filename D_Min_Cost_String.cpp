#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

#define nl "\n"
#define vi vector<int>
#define pi pair<int, int>
#define ll long long int
#define all(x) x.begin(), x.end()

map<string, int> cnt;

void Solve() {
    // Your code goes here.
    int n, k;
    cin >> n >> k;
    string s = "abcdefghijklmnopqrstuvwxyz";
    reverse(all(s));

    // string ans = "a";
    // for (int i = 1; i < n; i++) {
    //     string p = "";
    //     p += ans[i - 1];
    //     p += x;
    //     ans = ans + x;
    //     cnt[p]++;
    // }

    cout << s << nl;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}