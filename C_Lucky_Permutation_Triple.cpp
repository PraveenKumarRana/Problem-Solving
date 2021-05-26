#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

#define nl "\n"
#define vi vector<int>
#define pi pair<int, int>
#define ll long long int
#define all(x) x.begin(), x.end()

void Solve() {
    // Your code goes here.
    int n; cin>>n;
    vi a(n),b(n),c(n);
    map<int,int> mb,mc;
    for(int i=0; i<n; i++){
        a[i]=i;
        mb[i]++;
        mc[i]++;
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    Solve();
    return 0;
}