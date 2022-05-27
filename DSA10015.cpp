#include<bits/stdc++.h>
using namespace std;
struct edge{
    int u,v,w;
};
int n,m,par[1005],sz[1005];
vector<edge> canh;
void make_set(){
    for(int i=1;i<=n;i++){
        par[i]=i;
        sz[i]=1;
    }
}
int find(int v){
    if(v==par[v]) return v;
    return par[v]=find(par[v]);
}
bool Union(int a,int b){
    a=find(a);b=find(b);
    if(a==b) return false;
    if(sz[a]<sz[b]) swap(a,b);
    par[b]=a;
    sz[a]+sz[b];
    return true;
}
bool cmp(edge a,edge b) {return a.w<b.w;}
void kruskal(){
    vector<edge> mst;
    int d=0;
    sort(canh.begin(),canh.end(),cmp);
    for(int i=0;i<m;i++){
        if(mst.size()==n-1) break;
        edge k=canh[i];
        if(Union(k.u,k.v)){
            mst.push_back(k);
            d+=k.w;
        }
    }
    if(mst.size()==n-1) cout<<d<<endl;
}
main(){
    int t;cin>>t;
    while(t--){
        cin>>n>>m;
        canh.clear();
        for(int i=0;i<m;i++){
            int x,y,z; cin>>x>>y>>z;
            canh.push_back({x,y,z});
        }
        make_set();
        kruskal();
    }
}
