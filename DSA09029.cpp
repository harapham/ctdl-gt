#include<bits/stdc++.h>
using namespace std;
int v,e,check[1005];
vector<int> g[1005];
int ok;
void dfs(int u,int d){
    if(ok) return;
    check[u]=0;
    for(auto x:g[u]){
        if(check[x]){
            d++;
            if(d==v){
                ok=1; return;
            }
            dfs(x,d);
            d--;
        }
    }
}
main(){
    int t;cin>>t;
    while(t--){
        cin>>v>>e;
        ok=0;        
        int x,y,c=0;
        while(e--){
            cin>>x>>y;
            g[x].push_back(y);
            g[y].push_back(x);
        }

        for(int i=1;i<=v;i++){
            memset(check,1,sizeof(check));
            dfs(i,1);
            if(ok) {cout<<1;c=1;break;}
        }
        
        if(c==0) cout<<0;
        cout<<endl;
        for(int i=1;i<=v;i++){
			g[i].clear();
        }
    }
}