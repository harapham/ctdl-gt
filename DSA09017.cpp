#include<bits/stdc++.h>
using namespace std;
int v,check[1005];
vector<vector<int>> g;
void dfs(int u){
    check[u]=0;
    for(int i=0;i<g[u].size();i++){
        if(check[g[u][i]]) dfs(g[u][i]);
    }
}
main(){
    int t;cin>>t;
    while(t--){
        cin>>v;
        g.clear();g.resize(v+1);
        memset(check,1,sizeof(check));
        int x,y;
        for(int i=1;i<v;i++){
            cin>>x>>y;
            g[x].push_back(y);
            g[y].push_back(x);
        }
        dfs(1);
        int ok=0;
        for(int i=1;i<=v;i++){
            if(check[i]){
                ok=1; break;
            }
        }
        if(ok) cout<<"NO";
        else cout<<"YES";
        cout<<endl;
    }
}