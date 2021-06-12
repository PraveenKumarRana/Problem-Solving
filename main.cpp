#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    // Your code goes here.

    int n;
    cin >> n;
    multiset<pair<int, int>, greater<pair<int, int>>> mst;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        mst.insert({x, i});
    }

    return 0;
}