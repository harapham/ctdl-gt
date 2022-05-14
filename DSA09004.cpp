#include<bits/stdc++.h>
using namespace std;
int v,e,u,check[1005];
vector<vector<int>> a(1005);
void dfs(int u){
    check[u]=1;
    cout<<u<<" ";
    for(int i=0;i<a[u].size();i++){
        if(!check[a[u][i]]) dfs(a[u][i]);
    }
}
main(){
    int n,m,t; cin>>t;
    while(t--){
        cin>>v>>e>>u;
        while(e--){
            cin>>n>>m;
            a[n].push_back(m);
            a[m].push_back(n);
        }
        memset(check,0,sizeof(check));
        dfs(u);
        for(int i=0;i<1005;i++)a[i].clear();
        cout<<endl;
    }
}