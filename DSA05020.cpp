#include<bits/stdc++.h>
using namespace std;
int a[505][505],b[505][505],n,m;
int tinh(){
    b[0][1]=0;
    for(int i=1;i<=n;i++) b[i][1]=b[i-1][1]+a[i][1];
    for(int i=2;i<=m;i++) b[1][i]=b[1][i-1]+a[1][i];
    for(int i=2;i<=n;i++){
        for(int j=2;j<=m;j++){
            b[i][j]=min(b[i-1][j-1],min(b[i-1][j],b[i][j-1]))+a[i][j];
        }
    }
    return b[n][m];
}
main(){
    int t;cin>>t;
    while(t--){
        cin>>n>>m;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++) cin>>a[i][j];
        }
        cout<<tinh()<<endl;
    }
}