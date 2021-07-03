#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

long long int calc(pair<long long int, long long int> a,
                   pair<long long int, long long int> b) {
    return abs(a.first - b.first) + abs(a.second - b.second);
}

long long int dist(pair<long long int, long long int> a,
                   pair<long long int, long long int> b,
                   pair<long long int, long long int> c) {
    long long int dist1 = calc(c, a) + calc(a, b) + calc(b, c);
    return dist1;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    // Your code goes here.

    long long int tt;
    cin >> tt;
    while (tt--) {
        long long int n, m, i, j;
        cin >> n >> m >> i >> j;
        long long int x1 = 1, x2 = m, y1 = 1, y2 = n;

        vector<pair<long long int, long long int>> a(
            {{x1, y1}, {x2, y1}, {x1, y2}, {x2, y2}});

        long long int x = i, y = j;

        // for (int i = 0; i < 4; i++) {
        //     cout << a[i].first << " " << a[i].second << "\n";
        // }

        int p, q, r, s;
        long long int d = 0;
        for (long long int i = 0; i < 4; i++) {
            for (long long int j = 0; j < 4; j++) {
                long long int dis = dist(a[i], a[j], {x, y});
                // cout << "Distances: " << dis << " " << d << "\n";
                // cout << a[i].first << " " << a[i].second << " " << a[j].first
                //      << " " << a[j].second << " : " << x << " " << y << "\n";
                if (dis > d) {
                    d = dis;
                    p = a[i].first;
                    q = a[i].second;
                    r = a[j].first;
                    s = a[j].second;

                    // cout << "Ans: " << p << " " << q << " " << r << " " <<
                    // s<< "\n";
                }
            }
        }

        cout << p << " " << q << " " << r << " " << s << "\n";
    }

    return 0;
}