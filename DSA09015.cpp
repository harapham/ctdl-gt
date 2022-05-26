#include<bits/stdc++.h>
using namespace std;
int v,e,check[1005];
vector<vector<int>> g(1005);
bool dfs(int u){
    check[u]=1;
    for(auto x:g[u]){
        if(check[x]==0){
            if(dfs(x)) return true;
        } 
        else if(check[x]==1) return true;
    }
    check[u]=2;
    return false;
}
main(){
    int t;cin>>t;
    while(t--){
        cin>>v>>e;
        g.clear();g.resize(v+1);
        memset(check,0,sizeof(check));
        int x,y;
        while(e--){
            cin>>x>>y;
            g[x].push_back(y);
        }
        int ok=0;
        for(int i=1;i<=v;i++){
            if(check[i]==0){
                if(dfs(i))
                {cout<<"YES";
                ok=1; break;}
            }
        }
        
        if(!ok) cout<<"NO";
        cout<<endl;
    }
}