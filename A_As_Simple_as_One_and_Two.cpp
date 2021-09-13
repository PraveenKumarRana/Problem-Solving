// Author: Praveen Kumar Rana
// Date: 12-08-2021 (08:14:59)

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
        string s; cin>>s;
        string t="twone";
        vector<int> pos;
        int ns = s.size(), nt=t.size();
        for(int i=0; i<=(ns-nt); i++){
            string ssub = s.substr(i, nt);
            if(t==ssub){
                s[i+2]='?';
            }
        }

        t = "two";
        nt=t.size();
        for(int i=0; i<=(ns-nt); i++){
            string ssub = s.substr(i, nt);
            if(t==ssub){
                s[i+1]='?';
            }
        }

        t = "one";
        nt=t.size();
        for(int i=0; i<=(ns-nt); i++){
            string ssub = s.substr(i, nt);
            if(t==ssub){
                s[i+1]='?';
            }
        }

        for(int i=0; i<ns; i++){
            if(s[i]=='?'){
                pos.push_back(i+1);
            }
        }

        cout<<pos.size()<<NL;
        for(auto c: pos){
            cout<<c<<" ";
        }
        cout<<NL;
    }
}

int32_t main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    solve();
    return 0;
}