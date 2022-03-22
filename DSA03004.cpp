#include<bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        long long l=0,k=0;
        for(int i=0;i<n;i++){
            if(i%2==0) l=l*10+a[i];
            else k=k*10+a[i];
        }
        cout<<l+k<<endl;
    }
}