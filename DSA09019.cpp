#include<bits/stdc++.h>
using namespace std;
int v,e,check[1005];
vector<vector<int>> g(1005);
bool dfs(int u,int par){
    check[u]=0;
    for(auto x:g[u]){
        if(check[x]){
            if(dfs(x,u)) return true;
        }
        else if(x!=par) return true;
    }
    return false;
}
main(){
    int t;cin>>t;
    while(t--){
        cin>>v>>e;
        g.clear();g.resize(v+1);
        memset(check,1,sizeof(check));
        int x,y,ok=1;
        while(e--){
            cin>>x>>y;
            g[x].push_back(y);
            g[y].push_back(x);
        }
        for(int i=1;i<=v;i++){
            if(check[i]){
                if(dfs(i,0)){
                    cout<<"YES";
                    ok=0;
                    break;
                }
            }
        }
        if(ok) cout<<"NO";
        cout<<endl;
    }
}