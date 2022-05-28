#include<bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        int n;
        long long k;cin>>n>>k;
        long long a[n+1];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        long long d=0;
        for(int i=2;i<n;i++){
            for(int j=1;j<i;j++){
                auto it=lower_bound(a,a+j,k-a[i]-a[j]);
                d+=it-a;
            }
        }
        cout<<d<<endl;
    }
}