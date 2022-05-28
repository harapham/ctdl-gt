#include<bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n+1],giam[n+1],tang[n+1];
        for(int i=1;i<=n;i++) cin>>a[i];
        tang[n]=giam[n]=n;
        for(int i=n-1;i>=1;i--){
            if(a[i]>a[i+1]) giam[i]=giam[i+1];
            else giam[i]=i;
            if(a[i]<a[i+1]) tang[i]=tang[i+1];
            else tang[i]=i;
        }
        int s=0;
        for(int i=1;i<=n;i++){
            s=max(s,giam[tang[i]]-i+1);
        }
        cout<<s<<endl;
    }
}