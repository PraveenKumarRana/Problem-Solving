// Author: Praveen Kumar Rana
// Date: 11-08-2021 (18:33:38)

#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

#define NL "\n"
#define int long long int
#define all(x) x.begin(), x.end()
const int mod = 1e9 + 7;

int player1wins(string s){
    int p1l = 5, p2l=5;
    for(int i=0; i<10; i+=2) if(s[i]=='?') s[i]='1';

    int p1g = 0, p2g = 0;
    for(int i=0; i<10; i+=2){
        p1l--,p2l--;

        if(s[i]=='1'){
            p1g++;
        }
        if(s[i+1]=='1'){
            p2g++;
        }

        if((p1g > p2l+p2g) || (p1g+p1l<p2g)){
            return i+1;
        }
    }
    return 10;
}

int player2wins(string s){
    int p1l = 5, p2l=5;
    for(int i=1; i<10; i+=2) if(s[i]=='?') s[i]='1';

    int p1g = 0, p2g = 0;
    for(int i=0; i<10; i+=2){
        p1l--,p2l--;

        if(s[i]=='1'){
            p1g++;
        }
        if(s[i+1]=='1'){
            p2g++;
        }

        if((p1g > p2l+p2g) || (p1g+p1l<p2g)){
            return i+1;
        }
    }
    return 10;
}

void solve() {
    // Write your code here.
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        cout<<min(player1wins(s), player2wins(s))<<NL;
    }
}

int32_t main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    solve();
    return 0;
}