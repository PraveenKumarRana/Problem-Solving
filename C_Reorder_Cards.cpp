// Author: Praveen Kumar Rana
// Date: 08-08-2021 (20:50:22)

#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

#define NL "\n"
#define int long long int
#define all(x) x.begin(), x.end()
const int mod = 1e9 + 7;

void solve() {
    // Write your code here.
    int h, w, n; cin>>h>>w>>n;
    vector<pair<int,int>> row(n), col(n);

    for(int i=0; i<n; i++){
        cin>>row[i].first;
        row[i].second = i;
        cin>>col[i].first;
        col[i].second = i;
    }

    sort(all(row)), sort(all(col));
    set<int> st;
    for(auto c: row) st.insert(c.first);
    map<int,int> mp;
    
    int k=1;
    for(auto c: st){
        mp[c]=k++;
    }

    vector<pair<int,int>> ans(n);
    for(int i=0; i<n; i++){
        ans[row[i].second].first=mp[row[i].first];
    }

    st.clear();
    for(auto c: col) st.insert(c.first);
    mp.clear();
    
    k=1;
    for(auto c: st){
        mp[c]=k++;
    }
    for(int i=0; i<n; i++){
        ans[col[i].second].second=mp[col[i].first];
    }

    for(auto c: ans) cout<<c.first<<" "<<c.second<<NL;
}

int32_t main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    solve();
    return 0;
}