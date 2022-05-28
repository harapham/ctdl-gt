#include<bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        int n,v;cin>>n>>v;
        int a[n+1],c[n+1];
        for(int i=1;i<=n;i++) cin>>a[i];
        for(int i=1;i<=n;i++) cin>>c[i];
        int d[n+1][v+1];
        memset(d,0,sizeof(d));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=v;j++){
                if(j>=a[i]){
                    d[i][j]=max(d[i-1][j],d[i-1][j-a[i]]+c[i]);
                }
                else d[i][j]=d[i-1][j];
            }
        }
        cout<<d[n][v]<<endl;
    }
}