#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

int w, h, n, m, r;
int MX = 350000;
vector<bool> vis(MX, false);

struct build{
    int x, y, latency, speed, id;
};

struct ant{
    int speed, range, id;
};


inline void SOLVE() {
    // Convert your toughts into code here.
    cin>>w>>h;
    cin>>n>>m>>r;

    vector<build> Building(n);
    for(int i=0; i<n; i++){
        cin>>Building[i].x>>Building[i].y>>Building[i].latency>>Building[i].speed;
        Building[i].id=i;
    }

    vector<ant> Antenna(m);
    for(int i=0; i<m; i++){
        cin>>Antenna[i].range>>Antenna[i].speed;
        Antenna[i].id = i;
    }

    vector<pair<int,pair<int,int>>> ans;

    vector<int> ind(n);
    for(int i=0; i<n; i++){
        ind[i]=i;
    }
    unsigned seed = rand()%100; 
    shuffle(ind.begin(), ind.end(), default_random_engine(seed));

    for(int i=0; i<min(m,n); i++){
        ans.push_back({i, {Building[ind[i]].x, Building[ind[i]].y}});
    }

    // Output
    cout<<ans.size()<<"\n";
    for(auto c: ans){
        cout<<c.first<<" "<<c.second.first<<" "<<c.second.second<<"\n";
    }
}

int32_t main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    srand(time(NULL));
    SOLVE();
    return 0;
}