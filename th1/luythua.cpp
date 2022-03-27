#include<bits/stdc++.h>
using namespace std;
long long n,k,m=1e9+7;
struct mt{
    long long p[15][15];
};
mt nhan(mt a,mt b){
    mt s;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            s.p[i][j]=0;
            for(int k=0;k<n;k++){
                s.p[i][j]=(s.p[i][j]+(a.p[i][k]*b.p[k][j])%m)%m;
            }
        }
    }
    return s;
}
mt po(mt a, long long k){
    if(k==1) return a;
    mt x=po(a,k/2);
    if(k%2==0) return nhan(x,x);
    else return nhan(a,nhan(x,x));
}
main(){
    int t;cin>>t;
    while(t--){
        cin>>n>>k;
        mt a;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++) cin>>a.p[i][j];
        }
        mt s=po(a,k);
        long long k=0;
        for(int i=0;i<n;i++) k=(k+s.p[0][i])%m;
        cout<<k<<endl;
    }
}