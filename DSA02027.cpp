#include<bits/stdc++.h>
using namespace std;
int c[20][20],a[20],b[20]={0},n,cost=0,fopt=1e9,cmin=1e9;
void quaylui(int i){
    for(int j=2;j<=n;j++){
        if(b[j]==0){
            a[i]=j;
            b[j]=1;
            cost+=c[a[i-1]][a[i]];
            if(i==n){
                int v=cost+c[a[n]][a[1]];
                fopt=min(fopt,v);
            }
            else if(cost+cmin*(n-i+1)<fopt) quaylui(i+1);
            cost-=c[a[i-1]][a[i]];
            b[j]=0;
        }
    }
}
main(){
    cin>>n;
    for(int i=1;i<=n;i++) for(int j=1;j<=n;j++){ 
        cin>>c[i][j];
        if(i!=j) cmin=min(cmin,c[i][j]);
    }
    a[1]=1;
    quaylui(2);
    cout<<fopt<<endl;
}