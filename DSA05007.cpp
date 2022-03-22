#include<bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        long long a[n],c[n];
         for(int i=0;i<n;i++) cin>>a[i];
         c[0]=a[0];c[1]=max(a[0],a[1]);
         for(int i=2;i<n;i++){
             c[i]=max(c[i-2]+a[i],c[i-1]);
         }
         cout<<c[n-1]<<endl;
    }
}