#include<bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        int a[n+1];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        long long d=0;
        for(int i=0;i<n;i++){
            auto it=lower_bound(a+i+1,a+n,a[i]+k);
            d+=it-a-i-1;
        }
        cout<<d<<endl;
    }
}