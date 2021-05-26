#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

#define nl "\n"
#define vi vector<int>
#define pi pair<int, int>
#define ll long long int
#define all(x) x.begin(), x.end()

bool check(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum == 10;
}

void Solve() {
    // Your code goes here.
    int n;
    cin >> n;
    int i = 19;
    n--;
    while (n > 0) {
        while (!check(++i))
            ;
        n--;
    }

    cout << i << nl;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}