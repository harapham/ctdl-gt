#include<bits/stdc++.h>
using namespace std;
long long k,mod=1e9+7;
int n;
struct mt{
    long long p[15][15];
};
mt operator *(mt a,mt b){
    mt c;
    memset(c.p,0,sizeof(c.p));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            for(int k=1;k<=n;k++){
                c.p[i][j]=(c.p[i][j]+(a.p[i][k]*b.p[k][j])%mod)%mod;
            }
        }
    }
    return c;
}
mt lt(mt a,long long k){
    if(k==1) return a;
    mt b=lt(a,k/2);
    if(k%2) return a*b*b;
    else return b*b;
}
main(){
    int t;cin>>t;
    while(t--){
        cin>>n>>k;
        mt a;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++) cin>>a.p[i][j];
        }
        mt b=lt(a,k);
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++) cout<<b.p[i][j]<<" ";
            cout<<endl;
        }
    }
}