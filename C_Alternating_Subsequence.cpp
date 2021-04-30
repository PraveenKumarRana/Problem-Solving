#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

#define nl "\n"
#define vi vector<int>
#define pi pair<int, int>
#define ll long long int
#define all(x) x.begin(), x.end()

bool same(ll a, ll b){
    return ((a<0 && b<0) || (a>0 && b>0));
}

pair<ll,ll> calc(vector<ll> &a, ll start, ll n){
    stack<ll> st;
    for(ll i=start; i<n; i++){
        if(st.empty()){
            st.push(a[i]);
        }else{
            if(same(st.top() ,a[i])){
                ll mx = max(st.top(), a[i]);
                // cout<<st.top()<<" "<<a[i]<<" = "<<mx<<nl;
                st.pop();
                st.push(mx);
            }else{
                st.push(a[i]);
            }
        }
    }

    ll sum = 0, sizee = st.size();
    // cout<<"Sequence: ";
    while(!st.empty()){
        // cout<<st.top()<<" ";
        sum+=st.top();
        st.pop();
    }
    // cout<<nl;
    // cout<<nl;

    return {sum, sizee};
}

void Solve() {
    // Your code goes here.
    ll t; cin>>t;
    while(t--){
        ll n; cin>>n;
        vector<ll> a(n);
        for(ll i=0; i<n; i++) cin>>a[i];

        pair<ll,ll> a1 = {0,0};
        for(ll i=0; i<n; i++){
            if(a[i]>0){
                a1 = calc(a, i, n);
                break;
            }
        }

        pair<ll,ll> a2 = {0,0};
        for(ll i=0; i<n; i++){
            if(a[i]<0){
                a2 = calc(a, i, n);
                break;
            }
        }

        // cout<<"a1: "<<a1.first<<" "<<a1.second<<nl;
        // cout<<"a2: "<<a2.first<<" "<<a2.second<<nl;

        if(a1.second==a2.second){
            cout<<max(a1.first, a2.first)<<nl;
        }else if(a1.second<a2.second){
            cout<<a2.first<<nl;
        }else{
            cout<<a1.first<<nl;
        }
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}