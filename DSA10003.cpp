#include<bits/stdc++.h>
using namespace std;
int n,m,par[1005],sz[1005];
vector<pair<int,int>> g;
void make_set(){
    for(int i=1;i<=n;i++){
        par[i]=i;sz[i]=1;
    }
}
int find(int v){
    if(v==par[v]) return v;
    return par[v]=find(par[v]);
}
bool Union(int a,int b){
    a=find(a);b=find(b);
    if(a==b) return true;
    if(sz[a]<sz[b]) swap(a,b);
    par[b]=a;
    sz[a]+sz[b];
    return false;
}
main(){
    int t;cin>>t;
    while(t--){
        cin>>n>>m;
        g.clear();
        for(int i=0;i<m;i++){
            int x,y;cin>>x>>y;
            g.push_back({x,y});
        }
        make_set();
        int ok=1;
        for(auto x:g){
            if(Union(x.first,x.second)){
                cout<<"YES"; ok=0; break;
            }
        }
        if(ok) cout<<"NO";
        cout<<endl;
    }
}