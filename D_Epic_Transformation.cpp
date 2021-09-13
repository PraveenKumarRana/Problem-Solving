// Author: Praveen Kumar Rana
// Date: 09-08-2021 (20:10:39)

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
        int n; cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++) cin>>v[i];
        map<int,int> mp;
        for(auto c: v) mp[c]++;
        priority_queue<int> pq;
        for(auto c: mp){
            pq.push(c.second);
        }

        while(pq.size()>1){
            int x = pq.top(); pq.pop();
            int y = pq.top(); pq.pop();
            x--, y--;
            if(x>0) pq.push(x);
            if(y>0) pq.push(y);
        }

        // cout<<"Seg"<<NL;

        int ans = 0;
        while(!pq.empty()){
            ans+=pq.top();
            pq.pop();
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