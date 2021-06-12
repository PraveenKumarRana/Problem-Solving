#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    // Your code goes here.

    int n;
    cin >> n;
    set<int> s1, s2, s3;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x == 1) s1.insert(i + 1);
        if (x == 2) s2.insert(i + 1);
        if (x == 3) s3.insert(i + 1);
    }

    int ans = min({s1.size(), s2.size(), s3.size()});

    cout << ans << "\n";
    for (int i = 0; i < ans; i++) {
        cout << *s1.begin() << " " << *s2.begin() << " " << *s3.begin() << "\n";
        s1.erase(s1.begin());
        s2.erase(s2.begin());
        s3.erase(s3.begin());
    }

    return 0;
}