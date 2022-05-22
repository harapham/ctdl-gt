#include<bits/stdc++.h>
using namespace std;
int v,e,check[1005];
vector<vector<int>> g;
void dfs(int u){
    check[u]=1;
    for(int i=0;i<g[u].size();i++){
        if(check[g[u][i]]==0) dfs(g[u][i]);
    }
}
main(){
    int t,a,b,q,x,y;cin>>t;
    while(t--){
        cin>>v>>e;
        g.clear();g.resize(v+1);
        while(e--){
            cin>>a>>b;
            g[a].push_back(b);
            g[b].push_back(a);
        }
        cin>>q;
        while(q--){
            cin>>x>>y;
            memset(check,0,sizeof(check));
            dfs(x);
            if(check[y]) cout<<"YES";
            else cout<<"NO";
            cout<<endl;
        }
    }
}