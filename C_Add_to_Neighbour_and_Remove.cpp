// Author: Praveen Kumar Rana
// Date: 11-08-2021 (05:49:11)

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
        int sum = 0;
        for(int i=0; i<n; i++) sum+=v[i];

        set<int> div;
        for(int i=1; (i*i)<=sum; i++){
            if(sum%i==0){
                div.insert(i);
                div.insert(sum/i);
            }
        }

        int ans = 0;

        for(auto c: div){
            ans = 0;
            int ss = c;
            bool ok = true;
            for(int i=0; i<n; i++){
                if(ss-v[i]>=0){
                    ss -= v[i];
                    ans++;
                }else if(ss==0){
                    ss = c;
                    ans--;
                    i--;
                }else{
                    ok = false;
                    break;
                }
            }

            if(ss==0) ans--;

            if(ok) break;
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