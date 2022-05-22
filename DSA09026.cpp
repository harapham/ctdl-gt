#include<bits/stdc++.h>
using namespace std;
int v,e,s,f,check[1005],dau[1005];
vector<vector<int>> g;
void bfs(int u){
    queue<int> q;
    q.push(u);
    check[u]=0;
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
    int t,a,b;cin>>t;
    while(t--){
        cin>>v>>e>>s>>f;
        g.clear();g.resize(v+1);
        while(e--){
            cin>>a>>b;
            g[a].push_back(b);
        }
        memset(check,1,sizeof(check));
        memset(dau,0,sizeof(dau));
        bfs(s);
        stack<int>st;
        if(check[f]==0){
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
        else cout<<-1;
        cout<<endl;
    }
}