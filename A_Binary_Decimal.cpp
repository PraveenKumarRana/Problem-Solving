// Author: Praveen Kumar Rana
// Date: 17-07-2021 (20:09:52)

#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

#define NL "\n"
#define int long long int
#define all(x) x.begin(), x.end()
const int mod = 1e9 + 7;

int find(int n){
    int i=1;
    int x=0;
    while(n>0){
        if(n%10){
            x+=i;
        }
        i*=10;
        n/=10;
    }
    return x;
}

void solve() {
    // Write your code here.
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> nums;
        while(n>0){
            int x = find(n);
            n-=x;
            nums.push_back(x);
        }

        cout<<nums.size()<<NL;
    }
}

int32_t main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    solve();
    return 0;
}