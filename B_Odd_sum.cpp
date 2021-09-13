// Author: Praveen Kumar Rana
// Date: 13-08-2021 (08:44:54)

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
    for(int i=0; i<n; i++) cin>>v[i];

    int sum = 0;
    for(auto c: v) if(c>0) sum+=c;

    if(sum&1){
        cout<<sum<<NL;
    }else{
        int neg=(-1e5), pos = (1e5);
        for(auto c: v){
            if(c<0 && c%2!=0){
                neg = max(neg, c);
            }
            if(c>0 && c%2!=0){
                pos = min(pos, c);
            }
        }
        cout<<sum - min(pos, -neg)<<NL;
    }
}

int32_t main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    solve();
    return 0;
}