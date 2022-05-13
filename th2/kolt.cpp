#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> v(10005);
int d[10005];
void dfs(int n){
    d[n]=1;
    for(int i=0;i<v[n].size();i++){
        if(!d[v[n][i]]) dfs(v[n][i]);
    }
}
int main(){
    int n,m,x,ok=0;
    cin>>n>>m>>x;
    int a,b;
    for(int i=0;i<m;i++){
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    dfs(x);
    for(int i=1;i<=n;i++){
        if(!d[i]) {cout<<i<<endl; ok=1;}
    }
    if(!ok) cout<<0<<endl;
}