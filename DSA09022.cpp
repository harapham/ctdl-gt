#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> a(1005);
int v,e,u;
int check[1005];
void dfs(int u){
    check[u]=0;
    cout<<u<<" ";
    for(int i=0;i<a[u].size();i++){
        if(check[a[u][i]]) dfs(a[u][i]);
    }
}
main(){
    int t,n,m;cin>>t;
    while(t--){       
        cin>>v>>e>>u;
        a.clear(); a.resize(v+1);
        while(e--){
            cin>>n>>m;
            a[n].push_back(m);
        }
        memset(check,1,sizeof(check));
        dfs(u);
        cout<<endl;
    }
}