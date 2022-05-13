#include<bits/stdc++.h>
using namespace std;
int m,n,a[1005][1005];int c[1005][1005];
struct p{
    int x,y,b;
};
main(){
    int t;cin>>t;
    while(t--){
        int ok=INT_MAX;
        cin>>m>>n;
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++) cin>>a[i][j];
        }
        memset(c,1,sizeof(c));
        c[1][1]=0;
        queue<p> q;
        q.push({1,1,0});
        while(q.size()){
            p s=q.front(); q.pop();
            if(s.x==m&&s.y==n) {ok=min(s.b,ok); break;}
            else{
                if(s.x+a[s.x][s.y]<=m&&c[s.x+a[s.x][s.y]][s.y]){
                    c[s.x][s.y]=0;
                    q.push({s.x+a[s.x][s.y],s.y,s.b+1});
                }
                if(s.y+a[s.x][s.y]<=n&&c[s.x][s.y+a[s.x][s.y]]){
                    c[s.x][s.y]=0;
                    q.push({s.x,s.y+a[s.x][s.y],s.b+1});
                }
            }
        }
        if(ok==INT_MAX) cout<<-1;
        else cout<<ok;
        cout<<endl;
    }
}