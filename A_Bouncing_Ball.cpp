// Author: Praveen Kumar Rana
// Date: 10-08-2021 (05:44:15)

#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

#define NL "\n"
#define int long long int
#define all(x) x.begin(), x.end()
const int mod = 1e9 + 7;

int ans(string s, int x, int p, int k){
    int sum = 0;
    for(int i=p; i<s.size(); i+=k){
        if(s[i]!='1'){
            sum+=x;
        }
    }
    return sum;
}

void solve() {
    // Write your code here.
    int t; cin>>t;
    while(t--){
        int n, p, k; cin>>n>>p>>k;
        string s; cin>>s;
        int x, y; cin>>x>>y;
        p--;

        int res = ans(s, x, p, k);
        for(int i=1; i<n; i++){
            res = min(res, ans(s.substr(i,n-i), x, p, k)+(i*y));
        }

        cout<<res<<NL;
    }
}

int32_t main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    solve();
    return 0;
}