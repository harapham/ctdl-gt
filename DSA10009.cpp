#include<bits/stdc++.h>
using namespace std;
int v,e,d[105][105];
void floyd(){
    for(int k=1;k<=v;k++){
        for(int i=1;i<=v;i++){
            for(int j=1;j<=v;j++){
                if(d[i][j]>d[i][k]+d[k][j]){
                    d[i][j]=d[i][k]+d[k][j];
                }
            }
        }
    }
}
main(){
    cin>>v>>e;
    for(int i=1;i<=v;i++){
        for(int j=1;j<=v;j++) {d[i][j]=1e9;}
        d[i][i]=0;
    }
    while(e--){
        int x,y,z;
        cin>>x>>y>>z;
        d[x][y]=z;d[y][x]=z;
    }
    floyd();
    int q;cin>>q;
    while(q--){
        int x,y;
        cin>>x>>y;
        cout<<d[x][y]<<endl;
    }
}