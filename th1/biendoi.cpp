#include<bits/stdc++.h>
using namespace std;
void mincp(int a[],int b[],int n){
    vector<vector<int>> d(n,vector<int>(3));
    d[0][0]=0;d[0][1]=b[0];d[0][2]=b[0]*2;
    for(int i=1;i<n;i++){
        for(int j=0;j<3;j++){
            int mi=INT_MAX;
            if(j+a[i]!=a[i-1]) mi=min(mi,d[i-1][0]);
            if(j+a[i]!=a[i-1]+1) mi=min(mi,d[i-1][1]);
            if(j+a[i]!=a[i-1]+2) mi=min(mi,d[i-1][2]);
            d[i][j]=j*b[i]+mi;
        }
    }
    int kq=INT_MAX;
    for(int i=0;i<3;i++) kq=min(kq,d[n-1][i]);
    cout<<kq<<endl;
}
main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++){
             cin>>a[i]>>b[i];
        }
        mincp(a,b,n);
    }
}