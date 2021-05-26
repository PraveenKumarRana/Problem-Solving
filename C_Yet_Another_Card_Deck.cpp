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
    int n, q;
    cin >> n >> q;
    list<int> inp;
    for (int i = 0; i < n; i++) {
        int c;
        cin >> c;
        inp.push_back(c);
    }

    while (q--) {
        int j;
        cin >> j;
        int cnt = 0;
        for (list<int>::iterator it = inp.begin(); it != inp.end(); it++) {
            cnt++;
            if (*it == j) {
                int val = *it;
                inp.erase(it);
                inp.push_front(val);
                break;
            }
        }

        cout << cnt << " ";
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}