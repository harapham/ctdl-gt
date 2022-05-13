#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> v(10005);
int d[10005];int n,m,b;
vector<pair<int,int>> ds;
void dfs(int n){
    d[n]=1;
    for(int i=0;i<v[n].size();i++){
        if(!d[v[n][i]]) dfs(v[n][i]);
    }
}
int tplt(){
    int tp=0;
    for(int i=1;i<=n;i++){
        if(!d[i]){
            ++tp;
            dfs(i);
        }
    }
    return tp;
}
int dinh(int x){
    memset(d,false,sizeof(d));
    d[x]=1;
    if(x==1) dfs(2);
    else dfs(1);
    return tplt()+1;
}
int canh(){
    int ans=0;
    for(int i=1;i<=n;i++){
        for(int j=0;j<v[i].size();j++){
            int k=v[i][j];
            v[i].erase(v[i].begin()+j);
            dfs(i);
            if(tplt()+1>b) ans++;
            v[i].insert(v[i].begin()+j,k);
            memset(d,false,sizeof(d));
        }
    }
    return ans;
}
int main(){
    cin>>n>>m;
    int a,b;
    for(int i=0;i<m;i++){
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
        ds.push_back({a,b});
    }
    b=tplt();
    int co=0;
    for(int i=1;i<=n;i++){
        if(dinh(i)>b) co++;
    }
    cout<<co<<" ";
    memset(d,false,sizeof(d));
    cout<<canh()/2<<endl;
}