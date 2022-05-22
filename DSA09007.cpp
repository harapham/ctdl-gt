#include<bits/stdc++.h>
using namespace std;
int v,e,s,f,check[1005],dau[1005];
vector<vector<int>> g(1005);
void bfs(int u){
    check[u]=0;
    queue<int> q;
    q.push(u);
    while(q.size()){
        int k=q.front();q.pop();
        for(int i=0;i<g[k].size();i++){
            if(check[g[k][i]]){
                q.push(g[k][i]);
                check[g[k][i]]=0;
                dau[g[k][i]]=k;
            }
        }
    }
}
main(){
    int t,a,b; cin>>t;
    while(t--){
        cin>>v>>e>>s>>f;
        g.clear();g.resize(v+1);
        memset(check,1,sizeof(check));
        memset(dau,0,sizeof(dau));
        while(e--){
            cin>>a>>b;
            g[a].push_back(b);
            g[b].push_back(a);
        }
        bfs(s);
        if(!check[f]){
            int k=f;
            stack<int> st;
            while(k>0){
                st.push(k);
                k=dau[k];
            }
            while(st.size()){
                cout<<st.top()<<" ";
                st.pop();
            }
        }
        else cout<<-1;
        cout<<endl;
    }
}