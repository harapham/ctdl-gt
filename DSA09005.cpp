#include<bits/stdc++.h>
using namespace std;
int v,e,u,check[1005];
vector<vector<int>> a(1005);
void bfs(int u){
    queue<int>q; q.push(u);
    check[u]=1;
    cout<<u<<" ";
    while(q.size()){
        int x=q.front();q.pop();
        for(int i=0;i<a[x].size();i++){
            if(!check[a[x][i]]){
                q.push(a[x][i]);
                check[a[x][i]]=1;
                cout<<a[x][i]<<" ";
            }
        }
    }
}
main(){
    int n,m,t; cin>>t;
    while(t--){
        cin>>v>>e>>u;
        while(e--){
            cin>>n>>m;
            a[n].push_back(m);
            a[m].push_back(n);
        }
        memset(check,0,sizeof(check));
        bfs(u);
        for(int i=0;i<1005;i++)a[i].clear();
        cout<<endl;
    }
}