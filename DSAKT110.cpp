#include<bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n+1];
        for(int i=1;i<=n;i++) cin>>a[i];
        int d[n+1];
        memset(d,0,sizeof(d));
        d[1]=a[1];
        for(int i=2;i<=n;i++){
            d[i]=max(d[i-1],d[i-2]+a[i]);
        }
        cout<<d[n]<<endl;
    }
}