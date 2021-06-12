#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    // Your code goes here.

    long long n, k;
    cin >> n >> k;
    vector<pair<long long, long long>> a(n);
    for (long long i = 0; i < n; i++) {
        cin >> a[i].second >> a[i].first;
    }

    sort(a.begin(), a.end(), greater<pair<int, int>>());

    long long mx = 0, sum = 0;
    multiset<pair<long long, long long>> st;
    for (long long i = 0; i < n; i++) {
        st.insert({a[i].second, i});
        sum += a[i].second;
        while (st.size() > k) {
            auto it = st.begin();
            sum -= (*it).first;
            st.erase(it);
        }

        mx = max(mx, sum * a[i].first);
    }

    cout << mx << "\n";s

    return 0;
}