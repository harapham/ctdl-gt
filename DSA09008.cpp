#include<bits/stdc++.h>
using namespace std;
int v,e,check[1005];
vector<vector<int>> g(1005);
void dfs(int u){
    check[u]=0;
    for(int i=0;i<g[u].size();i++){
        if(check[g[u][i]]) dfs(g[u][i]);
    }
}
int stp(){
    memset(check,1,sizeof(check));
    int s=0;
    for(int i=1;i<=v;i++){
        if(check[i]){
            s++;
            dfs(i);
        }
    }
    return s;
}
main(){
    int t,a,b;cin>>t;
    while(t--){
        cin>>v>>e;
        g.clear();g.resize(v+1);
        while(e--){
            cin>>a>>b;
            g[a].push_back(b);
            g[b].push_back(a);
        }
        cout<<stp()<<endl;
    }
}