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
    int n, s; cin>>n>>s;
    if(s>=2*n){
        cout<<"YES"<<nl;
        for(int i=1; i<n; i++){
            cout<<2<<" ";
            s-=2;
        }
        cout<<s<<nl;
        cout<<1<<nl;
    }else{
        cout<<"NO"<<nl;
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}