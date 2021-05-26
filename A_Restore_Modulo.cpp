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
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        int mx = 0;
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            mx = max(a[i], mx);
        };

        set<int> st;
        for (int i = 1; i < n; i++) {
            st.insert(a[i] - a[i - 1]);
        }

        n = st.size();

        if (n > 2) {
            printf("-1\n");
            continue;
        }
        if (n == 1) {
            printf("0\n");
            continue;
        }
        int x = *st.begin();
        st.erase(st.begin());
        int y = *st.begin();

        if (x <= 0 && y <= 0) {
            printf("-1\n");
            continue;
        }
        if (x >= 0 && y >= 0) {
            printf("-1\n");
            continue;
        }

        if (x < y) swap(x, y);

        if (mx > x - y) {
            printf("-1\n");
            continue;
        }

        printf("%d %d\n", x - y, x);
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}