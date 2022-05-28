#include<bits/stdc++.h>
using namespace std;
main(){
    int c,n;cin>>c>>n;
    int m[n+5];
    for(int i=1;i<=n;i++) cin>>m[i];
    int d[n+5][c+5];
    memset(d,0,sizeof(d));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=c;j++){
            if(j>=m[i]){
                d[i][j]=max(d[i-1][j],d[i-1][j-m[i]]+m[i]);
            }
            else d[i][j]=d[i-1][j];
        }
    }
    cout<<d[n][c];
}