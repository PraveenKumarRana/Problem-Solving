#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

int find(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    // Your code goes here.

    int n;
    cin >> n;

    while (n >= 10) {
        n = find(n);
    }

    cout << n << "\n";
    return 0;
}