#include<bits/stdc++.h>
using namespace std;
int a[55];
main(){
    int t;cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        int m=min(k,n-k);
        int nho=0,lon=0;
        for(int i=0;i<n;i++){
            if(i<m) nho+=a[i];
            else lon+=a[i];
        }
        cout<<lon-nho<<endl;
    }
}