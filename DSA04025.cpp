#include<bits/stdc++.h>
using namespace std;
long long mod=1e9+7;
struct mt{
    long long p[15][15];
};
mt operator * (mt a,mt b){
    mt c;
    memset(c.p,0,sizeof(c.p));
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<2;k++){
                c.p[i][j]=(c.p[i][j]+(a.p[i][k]*b.p[k][j])%mod)%mod;
            }
        }
    }
    return c;
}
mt lt(mt a,int n){
    if(n==1) return a;
    mt b=lt(a,n/2);
    if(n%2==0) return b*b;
    return a*b*b;
}
main(){
    int t;cin>>t;
    while(t--){
        mt a;
        a.p[0][0]=a.p[0][1]=a.p[1][0]=1;a.p[1][1]=0;
        int n;cin>>n;
        mt k=lt(a,n);
        cout<<k.p[0][1]<<endl;
    }
}