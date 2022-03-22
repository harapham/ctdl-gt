#include<bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        int n,m=0;cin>>n;
        int a[n],c[n];
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++){
            c[i]=a[i];
            for(int j=0;j<i;j++){
                if(a[j]<a[i]) c[i]=max(c[i],c[j]+a[i]);
            }
            m=max(c[i],m);
        }
        cout<<m<<endl;
    }
}