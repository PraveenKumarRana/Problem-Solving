// author: @iamyours

#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

class Solve{
    public:
    void solve();
    
    template<typename T>
    void read(vector<T> &a){
        for(auto &it: a) cin>>it;
    }
};



void Solve() {
    // Convert your toughts into code here.
    int n; cin>>n;
    string s; cin>>s;
    
    stack<pair<char, int>> st;
    for(int i=0; i<n; i++){
        if(!st.empty() && st.top().first==s[i]){
            pair<char,int> cnt = st.top();
            st.pop();
            st.push({s[i], cnt.second+1});
        }else{
            st.push({s[i], 1});
        }
    }

    vector<pair<char,int>> input;
    while(!st.empty()){
        input.push_back(st.top());
        st.pop();
    }

    while(input.size()>0){
        bool ok = false;
        for(auto c: input){
            cout<<c.first<<" ";
        }
        cout<<NL;
        for(auto c: input){
            cout<<c.second<<" ";
        }
        cout<<NL;

        for(int i=0; i<input.size()-1; i++){
            if((input[i+1].first-input[i].first)==1){
                int sum = input[i+1].second + input[i].second - 1;
                sum -= input[i].second;
                input[i+1].second-=sum;
                input.erase(input.begin()+i);
                ok = true;
                break;
            }
            else if((input[i+1].first-input[i].first)==-1){
                int sum = input[i+1].second + input[i].second - 1;
                sum -= input[i+1].second;
                input[i].second-=sum;
                input.erase(input.begin()+(i+1));
                ok = true;
                break;
            }
        }
        if(!ok){
            break;
        }
    }

    int cnt = 0;
    for(auto c: input){
        cnt+=c.second;
    }

    cout<<n-cnt<<NL;
}

int32_t main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}