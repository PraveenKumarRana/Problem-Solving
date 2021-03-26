// author: @iamyours

#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

#define NL "\n"
#define int long long int
#define vi vector<int>
#define pi pair<int, int>
#define all(x) x.begin(), x.end()
#define tc int t; cin>>t; while(t--)

const int mod = 1e9 + 7;

template<typename T>
void read(vector<T> &a) {
    for (auto &it : a) cin >> it;
}

void Solve() {
    // Convert your toughts into code here.
    int t; cin>>t;
    while(t--){
        int n, m, x; cin>>n>>m>>x;

        int row = 0, col = (x+n-1)/n;
        if(x%n==0){
            row = n;
        }else{
            row = x%n;
        }

        int ans = (row-1)*m+col;
        cout<<ans<<NL;
    }
}

int32_t main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}