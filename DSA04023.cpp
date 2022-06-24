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
        for(int i=1;i<n;i++){
            int it=upper_bound(a,a+i,a[i]-k)-a;
            d+=i-it;
        }
        cout<<d<<endl;
    }
}