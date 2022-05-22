#include<bits/stdc++.h>
using namespace std;
int v,e,u,check[1005];
vector<vector<int>> a;
void bfs(int u){
    check[u]=0;
    queue<int> q; q.push(u);
    while(q.size()){
        int k=q.front();q.pop();
        cout<<k<<" ";
        for(int i=0;i<a[k].size();i++){
            if(check[a[k][i]]){
                q.push(a[k][i]);
                check[a[k][i]]=0;
            }
        }
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
        bfs(u);
        cout<<endl;
    }
}