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

int match(string a, string b){
    int i=0, j=0;
    for(i=0; i<b.size(); i++){
        if(j<a.size() && a[j]==b[i]){
            j++;
        }else{
            j=0;
        }
        if(j==a.size()){
            break;
        }
    }

    // cout<<a<<" "<<b<<" - "<<j<<NL;
    if(j==a.size()){
        return a.size();
    }
    return 0;
}

void Solve() {
    // Convert your toughts into code here.
    tc{
        string a, b; cin>>a>>b;
        if(a.size()>b.size()){
            swap(a,b);
        }

        int mx = 0;
        for(int i=0; i<a.size(); i++){
            for(int j=i; j<a.size(); j++){
                string temp = a.substr(i, j+1);
                mx = max(mx, match(temp, b));
            }
        }

        int ans = a.size()+b.size()-2*mx;
        cout<<ans<<NL;
    }
}

int32_t main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}