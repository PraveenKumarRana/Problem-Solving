#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

#define nl "\n"
#define vi vector<int>
#define pi pair<int, int>
#define ll long long int
#define all(x) x.begin(), x.end()

set<pi> st;

void path(pi a, pi b) {
    queue<pi> q;
    q.push(a);

    vector<pi> dir({{0, 1}, {1, 0}, {0, -1}, {-1, 0}});

    while (!q.empty()) {
        pi nn = q.front();
        q.pop();
        st.insert(nn);

        for (auto c : dir) {
            int nnx = nn.first + c.first;
            int nny = nn.second + c.second;

            if (abs(b.first - nnx) + abs(b.second - nny) <
                abs(b.first - nn.first) + abs(b.second - nn.second)) {
                q.push({nnx, nny});
                break;
            }
        }
    }
}

void Solve() {
    // Your code goes here.
    vector<int> x(3), y(3);
    vector<pi> inp(3);
    for (int i = 0; i < 3; i++) {
        cin >> x[i] >> y[i];
        inp[i] = {x[i], y[i]};
    }

    sort(all(x));
    sort(all(y));

    path({x[1], y[1]}, inp[0]);
    path({x[1], y[1]}, inp[1]);
    path({x[1], y[1]}, inp[2]);

    cout << st.size() << nl;
    for (auto c : st) cout << c.first << " " << c.second << nl;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}