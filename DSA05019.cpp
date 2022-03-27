#include<bits/stdc++.h>
using namespace std;
int a[505][505],b[505][505],n,m;
int tinh(){
    int kq=0;
    memset(b,0,sizeof(b));
    for(int i=0;i<n;i++) b[i][0]=a[i][0];
    for(int i=0;i<m;i++) b[0][i]=a[0][i];
    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            if(a[i][j]){
                b[i][j]=min(b[i-1][j-1],min(b[i-1][j],b[i][j-1]))+1;
            }
            else b[i][j]=0;
            kq=max(kq,b[i][j]);
        }
    }
    return kq;
}
main(){
    int t;cin>>t;
    while(t--){
        cin>>n>>m;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++) cin>>a[i][j];
        }
        cout<<tinh()<<endl;
    }
}