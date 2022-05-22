#include<bits/stdc++.h>
using namespace std;
int check[1005];
int v,e;
vector<vector<int>> a(1005);
void bfs(int n,int x,int y){
    queue<int> q;
    q.push(n);
    while (q.size()){
        int u=q.front();
        q.pop();
        for(auto v:a[u]){
            if ((u==x&&v==y)||(u==y&&v==x))continue;
            if (!check[v]){
                check[v] = 1;
                q.push(v);
            }
        }
    }
}
int tplt(int x,int y){
    int k=0;
    memset(check,0,sizeof(check));
    for(int i=1;i<=v;i++){
        if(!check[i]){
            k++;
            check[i]=1;
            bfs(i,x,y);
        }
    }
    return k;
}
main(){
    int t;cin>>t;
    while(t--){
        cin>>v>>e;
        vector<pair<int,int>> canh(e);
        a.clear();
        a.resize(v+1);
        for(int i=0;i<e;i++){
            cin>>canh[i].first>>canh[i].second;
            a[canh[i].first].push_back(canh[i].second);
            a[canh[i].second].push_back(canh[i].first);
        }
        sort(canh.begin(),canh.end());
        int tp=tplt(-1,-1);
        for(int i=0;i<e;i++){
            int k=tplt(canh[i].first,canh[i].second);
            if(k>tp) cout<<canh[i].first<<" "<<canh[i].second<<" ";
        }
        cout<<endl;
        
    }
}