#include<bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        long n;cin>>n;
        long long a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        long k,ok=0,kq;
        for(int i=0;i<n-1;i++){
            cin>>k;
            if(k!=a[i]&&ok==0){
                kq=i+1;ok=1;
            } 
        }
        cout<<kq<<endl;
    }
}