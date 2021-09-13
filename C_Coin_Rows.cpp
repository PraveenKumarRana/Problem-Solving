// Author: Praveen Kumar Rana
// Date: 11-08-2021 (18:53:44)

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
        int v[2][n];
        for(int j=0; j<2; j++){
            for(int i=0; i<n; i++){
                cin>>v[j][i];
            }
        }

        vector<int> up(n,0), down(n,0);
        up[n-1]=v[0][n-1], down[0] = v[1][0];

        for(int i=1; i<n; i++){
            down[i]=down[i-1]+v[1][i];
            up[n-i-1]=up[n-i]+v[0][n-i-1];
        }

        int score = 0, ans = LLONG_MAX;
        if(n==1){
            ans = 0;
        }else if(n==2){
            ans = min(down[0], up[1]);
        }else{
            for(int i=1; i<n-1; i++){
                score = max(down[i-1], up[i+1]);
                ans = min(ans, score);
            }

            ans = min(ans, up[1]);
            ans = min(ans, down[n-2]);
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