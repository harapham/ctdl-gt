#include<bits/stdc++.h>
using namespace std;
int v,e,check[1005];
vector<vector<int>> g(1005);
void dfs(int u,int i){
    check[u]=0;
    for(auto x:g[u]){
        if(check[x]&&x!=i) dfs(x,i);
    }
}
int tp(int k){
    int t=0;
    memset(check,1,sizeof(check));
    for(int i=1;i<=v;i++){
        if(check[i]&&i!=k){
            t++; dfs(i,k);
        }
    }
    return t;
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