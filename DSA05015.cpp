#include<bits/stdc++.h>
using namespace std;
long long mod=1e9+7;
main(){
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        if(k>n) cout<<0<<endl;
        else{
            long long t=1;
            for(int i=0;i<k;i++){
                t=(t*(n-i))%mod;
            }
            cout<<t<<endl;
        }
    }
}