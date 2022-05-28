#include<bits/stdc++.h>
using namespace std;
int f[100005];
long long mod=1e9+7;
void dc(int n,int k){
    memset(f,0,sizeof(f));
    f[0]=1;f[1]=1;
    for(int i=2;i<=n;i++){
        if(i<k){
            for(int j=1;j<=i;j++){
                f[i]=(f[i]+f[i-j])%mod;
            }
        }
        else{
            for(int j=1;j<=k;j++){
                f[i]=(f[i]+f[i-j])%mod;
            }
        }
    }
    cout<<f[n]<<endl;
}
main(){
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        dc(n,k);
    }
}