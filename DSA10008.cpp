#include<bits/stdc++.h>
using namespace std;
int v,e,s,check[1005],d[1005];
vector<pair<int,int>> g[1005];
void dijkstra(int s){
    d[s]=0;
    for(int i=0;i<v;i++){
        int u=-1;
        for(int j=1;j<=v;j++){
            if(check[j]&&(u==-1||d[j]<d[u])) u=j;
        }
        if(u==1e9) break;
        check[u]=0;
        for(auto x:g[u]){
            int dinh=x.first;
            int kc=x.second;
            if(d[dinh]>d[u]+kc) d[dinh]=d[u]+kc;
        }
    }
}
main(){
    int t;cin>>t;
    while(t--){
        cin>>v>>e>>s;
        while(e--){
            int x,y,z;
            cin>>x>>y>>z;
            g[x].push_back({y,z});
            g[y].push_back({x,z});
        }
        for(int i=1;i<=v;i++) d[i]=1e9;
        memset(check,1,sizeof(check));
        dijkstra(s);
        for(int i=1;i<=v;i++) cout<<d[i]<<" ";
        cout<<endl;
        for(int i=1;i<=v;i++) g[i].clear();
    }
}