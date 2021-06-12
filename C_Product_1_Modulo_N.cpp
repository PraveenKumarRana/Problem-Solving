#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    // Your code goes here.

    long long int n;
    cin >> n;
    vector<long long int> cp;
    for (long long int i = 1; i < n; i++) {
        if (gcd(i, n) == 1) {
            cp.push_back(i);
        }
    }

    long long int prod = 1;
    for (long long int i = 0; i < cp.size(); i++) {
        prod = (prod * cp[i]) % n;
    }

    if (prod > 1) {
        for (long long int i = 0; i < cp.size(); i++) {
            if (cp[i] == prod) {
                cp.erase(cp.begin() + i);
                break;
            }
        }
    }

    cout << cp.size() << "\n";
    for (auto c : cp) cout << c << " ";
    return 0;
}