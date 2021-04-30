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
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vi a(n);
        for(int i=0; i<n; i++) cin>>a[i];
        for(int i=0; i<n; i++) a[i]--;

        int mx = 0;
        for(int i=n-1; i>=0; i--){
            mx = max(mx-1, a[i]);
            if(a[i]<0 && mx>=0){
                a[i]=0;
            }
        }

        for(int i=0; i<n; i++){
            if(a[i]>=0) a[i]=1;
            else a[i]=0;
        }

        for(int i=0; i<n; i++) cout<<a[i]<<" ";
        cout<<nl;
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}