// Author: Praveen Kumar Rana
// Date: 17-08-2021 (19:24:24)

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
    vector<int> v(n);

    for(int i=0; i<n; i++){
        cin>>v[i];
        v[i]=(v[i]<0? -1: 1);
    }

    int ans=0, bal=0, cnt1=0, cnt2=0;
    for(int i=0; i<n; i++){
        cnt1 += (bal%2==0? 1: 0);
        cnt2 += (bal%2==0? 0: 1);

        if(v[i]<0) bal++;
        
        if(bal%2==0) ans+=cnt1;
        else ans+=cnt2;
    }

    cout<<(n*(n+1))/2 - ans<<" "<<ans<<NL;
}

int32_t main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    solve();
    return 0;
}