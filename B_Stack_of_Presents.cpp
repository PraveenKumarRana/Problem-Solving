// Author: Praveen Kumar Rana
// Date: 10-08-2021 (05:11:47)

#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

#define NL "\n"
#define int long long int
#define all(x) x.begin(), x.end()
const int mod = 1e9 + 7;

void solve() {
    // Write your code here.
    int t; cin>>t;
    while(t--){
        int n, m; cin>>n>>m;
        vector<int> v(n);
        for(int i=0; i<n; i++) cin>>v[i];
        map<int,int> mp;
        for(int i=0;i<n; i++) mp[v[i]]=i;
        vector<pair<int,int>> vp(m);
        for(int i=0; i<m; i++){
            cin>>vp[i].first;
            vp[i].second = mp[vp[i].first];
        }

        int ans = 2*vp[0].second+1;
        int mx = vp[0].second;

        // cout<<ans<<NL;
        for(int i=1; i<m; i++){
            if(vp[i].second>mx){
                ans += 2*(vp[i].second - i)+1;
                mx = max(mx, vp[i].second);
            }else{
                ans++;
            }
            // cout<<ans<<NL;
        }

        cout<<ans<<NL;
    }
}

int32_t main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    solve();
    return 0;
}