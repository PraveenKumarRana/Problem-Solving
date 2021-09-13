// Author: Praveen Kumar Rana
// Date: 11-08-2021 (18:20:05)

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
    vector<pair<int,int>> v(n+1);
    int tw = 0;
    for(int i=1; i<=n; i++){
        cin>>v[i].first>>v[i].second;
        tw+=v[i].first;
    }

    vector<int> mxlr(n+2, 0), mxrl(n+2, 0);
    mxlr[1]=v[1].second, mxrl[n]=v[n].second;
    for(int i=2; i<=n; i++){
        mxlr[i]=max(mxlr[i-1], v[i].second);
        mxrl[n-i+1] = max(mxrl[n-i+2], v[n-i+1].second);
    }

    for(int i=1; i<=n; i++){
        int w = tw - v[i].first;
        cout<<w*max(mxlr[i-1], mxrl[i+1])<<" ";
    }
    cout<<NL;
}

int32_t main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    solve();
    return 0;
}