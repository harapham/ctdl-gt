#include<bits/stdc++.h>
using namespace std;
int n,m,u,check[1005];
vector<pair<int,int>> kq;
vector<vector<int>> g(1005);
void dfs(int u){
    check[u]=0;
    for(auto x:g[u]){
        if(check[x]){kq.push_back({u,x}); dfs(x);}
    }
}
int kt(){
    for(int i=1;i<=n;i++){
        if(check[i]) return 0;        
    }
    return 1;
}
main(){
    int t;cin>>t;
    while(t--){
        cin>>n>>m>>u;
        g.clear();g.resize(n+1);
        kq.clear();
        memset(check,1,sizeof(check));
        while(m--){
            int x,y;cin>>x>>y;
            g[x].push_back(y);
            g[y].push_back(x);
        }
        dfs(u);
        if(kt()){
            for(auto x:kq){
                cout<<x.first<<" "<<x.second<<endl;
            }
        }
        else cout<<-1<<endl;
    }
}