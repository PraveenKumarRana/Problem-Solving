// Author: Praveen Kumar Rana
// Date: 11-08-2021 (06:11:39)

#include <bits/stdc++.h>
#include <limits>
#pragma GCC optimize("Ofast")
using namespace std;

#define NL "\n"
#define all(x) x.begin(), x.end()
const int mod = 1e9 + 7;

void solve() {
    // Write your code here.
    int q; cin>>q;
    set<pair<int,int>> mst;
    set<pair<int,int>> orig; 

    int i=1;
    while(q--){
        int ch; cin>>ch;
        if(ch==1){
            int m; cin>>m;
            mst.insert({m, i});
            orig.insert({i, m});
            i++;
        }else if(ch==2){
            pair<int,int> val = *orig.begin();
            cout<<val.first<<" ";
            mst.erase({val.second, val.first});
            orig.erase(val);
        }else{
            auto it = mst.end();
            it--;
            it = mst.upper_bound({(*it).first, numeric_limits<int>::min()});
            pair<int,int> val = *it;
            cout<<val.second<<" ";
            orig.erase({val.second, val.first});
            mst.erase(val);
        }
    }
    cout<<NL;
}

int32_t main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    solve();
    return 0;
}