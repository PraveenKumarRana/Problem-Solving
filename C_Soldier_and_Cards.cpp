#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

#define nl "\n"
#define vi vector<int>
#define pi pair<int, int>
#define ll long long int
#define all(x) x.begin(), x.end()

bool check(queue<int> qa, queue<int> qao) {
    while (!qa.empty()) {
        if (qa.front() != qao.front()) {
            return false;
        }
        qa.pop();
        qao.pop();
    }
    return true;
}

void Solve() {
    // Your code goes here.
    int n;
    cin >> n;
    queue<int> qa, qb, qao, qbo;
    int k;
    cin >> k;
    for (int i = 0; i < k; i++) {
        int x;
        cin >> x;
        qa.push(x);
        qao.push(x);
    }
    cin >> k;
    for (int i = 0; i < k; i++) {
        int x;
        cin >> x;
        qb.push(x);
        qbo.push(x);
    }

    int cnt = 0;

    while (!qa.empty() && !qb.empty()) {
        cnt++;
        int a = qa.front();
        qa.pop();
        int b = qb.front();
        qb.pop();

        if (a > b) {
            qa.push(b);
            qa.push(a);
        } else {
            qb.push(a);
            qb.push(b);
        }

        if (cnt == 1000) {
            break;
        }
    }

    if (qa.empty()) {
        cout << cnt << " " << 2 << nl;
    } else if (qb.empty()) {
        cout << cnt << " " << 1 << nl;
    } else {
        cout << -1 << nl;
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}