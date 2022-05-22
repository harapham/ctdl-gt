#include<bits/stdc++.h>
using namespace std;
int v,e,check[1005],dau[1005];
vector<vector<int> > g(1005);
vector<vector<int> > n(1005);
void dfs(int u){
    check[u]=0;
    for(int i=0;i<n[u].size();i++){
        if(check[n[u][i]]) dfs(n[u][i]);
    }
}
int kt(){
    dfs(1);
    for(int i=1;i<=v;i++) if(check[i]) return 0;
    for(int i=1;i<g.size();i++){
        if(g[i].size()!=dau[i]) return 0;
    }
    return 1;
}
main(){
    int t,a,b;cin>>t;
    while(t--){
        cin>>v>>e;
        g.clear();g.resize(v+1);
        memset(check,1,sizeof(check));
        memset(dau,0,sizeof(dau));
        while(e--){
            cin>>a>>b;
            g[a].push_back(b);
            dau[b]++;
            n[a].push_back(b);
            n[b].push_back(a);
        }
        cout<<kt()<<endl;
    }
}