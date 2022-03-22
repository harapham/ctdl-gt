#include<bits/stdc++.h>
using namespace std;
int n,maxw,w[1005],v[1005],f[1005][1005];
int qhd(){
    memset(f,0,n+1);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=maxw;j++){
            f[i][j]=f[i-1][j];
            if(j>=w[i]){
                f[i][j]=max(f[i][j],f[i-1][j-w[i]]+v[i]);
            }
        }
    }
    return f[n][maxw];
}
main(){
    int t;cin>>t;
    while(t--){
        cin>>n>>maxw;
        for(int i=1;i<=n;i++) cin>>w[i];
        for(int i=1;i<=n;i++) cin>>v[i];
        cout<<qhd()<<endl;
    }
}