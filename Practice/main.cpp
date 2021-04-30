#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

#define nl "\n"
#define vi vector<int>
#define pi pair<int, int>
#define ll long long int
#define all(x) x.begin(), x.end()

vi chosen;
vi vec;

void permutation(int n){

    if(vec.size()==n){
        cout<<"Permutation: ";
        for(auto c: vec) cout<<c<<" ";
        cout<<nl;
        return;
    }else{
        for(int i=1; i<=n; i++){
            if(chosen[i]==1) continue;
            chosen[i]=1;
            vec.push_back(i);
            permutation(n);
            chosen[i]=0;
            vec.pop_back();
        }
    }
}

void Solve() {
    // Your code goes here.
    int n; cin>>n;
    chosen.resize(n+1, 0);
    permutation(n);
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}