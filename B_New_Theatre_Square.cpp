#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

#define nl "\n"
#define vi vector<int>
#define pi pair<int, int>
#define ll long long int
#define all(x) x.begin(), x.end()

void Solve() {
    // Your code goes here.
    ll t; cin>>t;
    while(t--){
        ll n, m, x, y; cin>>n>>m>>x>>y;
        vector<string> a(n);
        for(ll i=0; i<n; i++) cin>>a[i];

        ll ans = 0;
        if(y<2*x){
            for(ll i=0; i<n; i++){
                for(ll j=0; j<m; j++){
                    if(a[i][j]=='.' && (j+1)<m && a[i][j+1]=='.'){
                        ans+=y;
                        a[i][j]='#';
                        a[i][j+1]='#';
                    }else if(a[i][j]=='.'){
                        ans+=x;
                        a[i][j]='#';
                    }
                }
            }
        }else{
            for(ll i=0; i<n; i++){
                for(ll j=0; j<m; j++){
                    if(a[i][j]=='.'){
                        ans+=x;
                        a[i][j]='#';
                    }
                }
            }
        }

        cout<<ans<<nl;
    }
    
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}