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
    double sum = 0;
    double total = 0;
    for (int i = 0; i < n; i++) {
        double x;
        cin >> x;
        sum += x;
        total += 100;
    }

    double ans = (sum / total) * 100;
    printf("%.12lf\n", ans);
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}