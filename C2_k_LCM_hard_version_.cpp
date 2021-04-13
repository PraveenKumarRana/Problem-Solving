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
        int n, k;
        cin >> n >> k;

        priority_queue<int> ans;

        if (n & 1) {
            ans.push(1);
            ans.push(n / 2);
            ans.push(n / 2);
        } else {
            if (n % 4 == 0) {
                ans.push(n / 2);
                ans.push(n / 4);
                ans.push(n / 4);
            } else {
                ans.push(n / 2 - 1);
                ans.push(n / 2 - 1);
                ans.push(2);
            }
        }

        while (ans.size() != k) {
            int t = ans.top();
            ans.pop();
            if (t > 1 && t & 1) {
                ans.push(t - 1);
                ans.push(1);
            } else {
                ans.push(t / 2);
                ans.push(t / 2);
            }
        }
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}