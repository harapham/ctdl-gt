#include<bits/stdc++.h>
using namespace std;
int n,m,check[10005];
vector<vector<int>> g,g2;
stack<int> st;
void dfs(int u){
    check[u]=0;
    for(int i=0;i<g[u].size();i++){
        if(check[g[u][i]]) dfs(g[u][i]);
    }st.push(u);
}

void dfs2(int u){
    check[u]=0;
    for(auto x:g2[u]){
        if(check[x]) dfs2(x);
    } 
}
main(){
    int t;cin>>t;
    while(t--){
        cin>>n>>m;
        g.clear();g.resize(n+1);
        g2.clear();g2.resize(n+1);
        while(m--){
            int x,y;cin>>x>>y;
            g[x].push_back(y);
            g2[y].push_back(x);
        }
        int d=0;
        memset(check,1,sizeof(check));
        for(int i=1;i<=n;i++){
            if(check[i]) dfs(i);
        }
        memset(check,1,sizeof(check));
        while(st.size()){
            int k=st.top();st.pop();
            if(check[k]){
                dfs2(k);
                d++;
            }
        }
        if(d==1)cout<<"YES";
        else cout<<"NO "<<d;
        cout<<endl;
    }
}