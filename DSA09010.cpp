#include<bits/stdc++.h>
using namespace std;
int v,e,k,check[1005];
vector<vector<int>> g(1005);
void dfs(int u){
    check[u]=0;
    for(int i=0;i<g[u].size();i++){
        if(check[g[u][i]]) {k++;dfs(g[u][i]);}
    }
}
int kt(){
    int i=1;
    while(i<=v){
        memset(check,1,sizeof(check));  
        k=1;
        dfs(i);
        if(k==v){
            if(i==v) return 1;
            else i++;
        }
        else return 0;    
    }
}
main(){
    int t;cin>>t;
    while(t--){
        int a,b;
        cin>>v>>e;
        g.clear();g.resize(v+1);
        while(e--){
            cin>>a>>b;
            g[a].push_back(b);
        }
        if(kt()) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
}