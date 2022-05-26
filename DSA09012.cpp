#include<bits/stdc++.h>
using namespace std;
int v,e,check[1005];
vector<vector<int>> g(1005);
void dfs(int u,int k){
    check[u]=0;
    for(int i=0;i<g[u].size();i++){
        if(check[g[u][i]]&&g[u][i]!=k) dfs(g[u][i],k);
    }
}
int tp(int k){
    memset(check,1,sizeof(check));
    int d=0;
    for(int i=1;i<=v;i++){
        if(check[i]&&i!=k){
            d++;
            dfs(i,k);
        }
    }
    return d;
}
main(){
    int t;cin>>t;
    while(t--){
        cin>>v>>e;
        g.clear();g.resize(v+1);
        int x,y;
        while(e--){
            cin>>x>>y;
            g[x].push_back(y);
            g[y].push_back(x);
        }
        for(int i=1;i<=v;i++){
            if(tp(i)>1) cout<<i<<" ";
        }
        cout<<endl;
    }
}
