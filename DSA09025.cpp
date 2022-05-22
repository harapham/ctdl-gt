#include<bits/stdc++.h>
using namespace std;
int v,e,s,f,check[1005],dau[1005];
vector<vector<int>> g(1005);
void dfs(int u){
    check[u]=1;
    for(int i=0;i<g[u].size();i++){
        if(!check[g[u][i]]) {dau[g[u][i]]=u; dfs(g[u][i]);}
    }
}
main(){
    int t,a,b;cin>>t;
    while(t--){
        cin>>v>>e>>s>>f;
        g.clear();g.resize(v+1);
        while(e--){
            cin>>a>>b;
            g[a].push_back(b);
        }
        memset(check,0,sizeof(check));
        memset(dau,0,sizeof(dau));
        dfs(s);
        stack<int> st;
        if(check[f]==1){
            int k=f;
            while(k>0){
                st.push(k);
                k=dau[k];
            }
            while(st.size()){
                cout<<st.top()<<" ";
                st.pop();
            }
        }
        else cout <<-1;
        cout<<endl;
    }
}