// Author: Praveen Kumar Rana
// Date: 09-08-2021 (21:19:56)

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
        int n, u, r, d, l; cin>>n>>u>>r>>d>>l;

        bool ok = false;
        for(int i=0; i<=1; i++){
            for(int j=0; j<=1; j++){
                for(int k=0; k<=1; k++){
                    for(int m=0; m<=1; m++){
                        int uu=u, rr=r, dd=d, ll=l;
                        if(i==1) uu--, ll--;
                        if(j==1) uu--, rr--;
                        if(k==1) dd--, ll--;
                        if(m==1) dd--, rr--;

                        if(uu>=0 && uu<=(n-2) && ll>=0 && ll<=(n-2) && rr>=0 && rr<=(n-2) && dd>=0 && dd<=(n-2)){
                            ok = true;
                        }
                    }
                }
            }   
        }

        if(ok){
            cout<<"YES"<<NL;
        }else{
            cout<<"NO"<<NL;
        }
    }
}

int32_t main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    solve();
    return 0;
}