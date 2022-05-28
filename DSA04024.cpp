#include<bits/stdc++.h>
using namespace std;
long long n,k,mod=1e9+7;
struct mt{
    long long A[15][15];
};
mt nhan(mt a,mt b){
    mt c;
    memset(c.A,0,sizeof(c.A));
    for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                c.A[k][i]=(c.A[k][i]+(a.A[k][j]*b.A[j][i])%mod)%mod;
            }
        }
    }
    return c;
}
mt luythua(mt a,long long k){
    if(k==1) return a;
    mt c=luythua(a,k/2);
    if(k%2==0) return nhan(c,c);
    return nhan(a,nhan(c,c));
}
main(){
    int t;cin>>t;
    while(t--){
        cin>>n>>k;
        mt a;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++) cin>>a.A[i][j];
        }
        mt kq=luythua(a,k);
        long long d=0;
        for(int i=1;i<=n;i++){
            d=(d+kq.A[i][n])%mod;
        }
        cout<<d<<endl;
    }
}