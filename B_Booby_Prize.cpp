// Author: Praveen Kumar Rana
// Date: 08-08-2021 (20:43:41)

#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

#define NL "\n"
#define int long long int
#define all(x) x.begin(), x.end()
const int mod = 1e9 + 7;

void solve() {
    // Write your code here.
    int n; cin>>n;
    vector<pair<int,int>> v(n);
    for(int i=0;i<n; i++){
        cin>>v[i].first;
        v[i].second = (i+1);
    }

    sort(all(v), greater<pair<int,int>>());
    cout<<v[1].second<<NL;
}

int32_t main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    solve();
    return 0;
}