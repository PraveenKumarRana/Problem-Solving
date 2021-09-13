// Author: Praveen Kumar Rana
// Date: 10-08-2021 (07:36:57)

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

        int osum=0, esum=0;
        for(int i=0; i<n; i++){
            osum += (i%2==0? v[i]: 0);
            esum += (i%2==1? v[i]: 0);
        }

        if(osum<esum){
            for(int i=0; i<n; i++){
                cout<<(i%2==1? v[i]: 1)<<" ";
            }
            cout<<NL;
        }else{
            for(int i=0; i<n; i++){
                cout<<(i%2==0? v[i]: 1)<<" ";
            }
            cout<<NL;
        }
    }
}

int32_t main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    solve();
    return 0;
}