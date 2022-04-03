#include<bits/stdc++.h>
using namespace std;
long long n,k,m=1e9+7;
struct mt{
    long long p[15][15];
};
mt operator * (mt a,mt b){
    mt c;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            c.p[i][j]=0;
            for(int k=0;k<n;k++) c.p[i][j]=(c.p[i][j]+(a.p[i][k]*b.p[k][j])%m)%m;
        }
    }
    return c;
} 
mt tinh(mt a,long long k){
    if(k==1) return a;
    mt x=tinh(a,k/2);
    if(k%2==0) return (x*x);
    else return a*(x*x);
}
main(){
    int t;cin>>t;
    while(t--){
        cin>>n>>k;
        mt a;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++) cin>>a.p[i][j];
        }
        mt b=tinh(a,k);
        long long kq=0;
        for(int i=0;i<n;i++){
            kq=(kq+b.p[i][n-1-i])%m;
        }
        cout<<kq<<endl;
    }
}