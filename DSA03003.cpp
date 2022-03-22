#include<bits/stdc++.h>
using namespace std;
long long m=1e9+7;
main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        long long k=0;
        for(int i=0;i<n;i++){
            k=(k+a[i]*i)%m;
        }
        cout<<k<<endl;
    }
}