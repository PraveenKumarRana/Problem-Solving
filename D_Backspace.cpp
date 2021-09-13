// Author: Praveen Kumar Rana
// Date: 22-07-2021 (20:56:18)

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
        string s, t; cin>>s>>t;
        bool ok = false;

        int j=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]==t[j]){
                j++;
            }else{
                
            }
        }
    }
}

int32_t main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    solve();
    return 0;
}