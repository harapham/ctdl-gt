#include<bits/stdc++.h>
using namespace std;
int n,a[15][15],ok;
char kq[50];
void quaylui(int i,int j,int k){
    if(i==n&&j==n){
        for(int l=1;l<k;l++) cout<<kq[l];
        cout<<" ";ok=0;
        return;
    }
    if(i+1<=n&&a[i+1][j]==1){
        kq[k]='D';
        quaylui(i+1,j,k+1);
    }
    if(j+1<=n&&a[i][j+1]==1){
        kq[k]='R';
        quaylui(i,j+1,k+1);
    }
}
main(){
    int t;cin>>t;
    while(t--){
        cin>>n;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++) {cin>>a[i][j];}
        }
        ok=1;
        if(a[1][1]==0) cout<<"-1";
        else{
            quaylui(1,1,1);
            if(ok) cout<<"-1";}
        cout<<endl;
    }
}