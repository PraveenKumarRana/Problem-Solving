// Author: Praveen Kumar Rana
// Date: 08-08-2021 (20:40:41)

#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

#define NL "\n"
#define int long long int
#define all(x) x.begin(), x.end()
const int mod = 1e9 + 7;

void solve() {
    // Write your code here.
    int a, b; cin>>a>>b;
    for(int i=0; i<=255; i++){
        if((a^i)==b){
            cout<<i<<"\n";
            break;
        }
    }
}

int32_t main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    solve();
    return 0;
}