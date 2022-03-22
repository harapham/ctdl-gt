#include<bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n],c[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int kq=0;
        for(int i=0;i<n;i++){
            c[i]=1;
            for(int j=0;j<i;j++){
                if(a[j]<=a[i]){
                    c[i]=max(c[i],c[j]+1);
                }
            }
            kq=max(kq,c[i]);
        }
        cout<<n-kq<<endl;
    }
}