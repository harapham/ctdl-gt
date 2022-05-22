#include<bits/stdc++.h>
using namespace std;
int v,e,check[1005];
vector<vector<int>> g;
void dfs(int u){
    check[u]=0;
    for(int i=0;i<g[u].size();i++){
        if(check[g[u][i]]) dfs(g[u][i]);
    }
}
int kt(){
    dfs(1);
    for(int i=1;i<=v;i++) if(check[i]) return 0;
    int k=0;
    for(int i=0;i<g.size();i++){
        if(g[i].size()%2==1) k++;
    }
    if(k==0) return 2;
    if(k<3) return 1;
    return 0;
}
main(){
    int t,a,b;cin>>t;
    while(t--){
        cin>>v>>e;
        g.clear();g.resize(v+1);
        memset(check,1,sizeof(check));
        while(e--){
            cin>>a>>b;
            g[a].push_back(b);
            g[b].push_back(a);
        }
        cout<<kt()<<endl;
    }
}