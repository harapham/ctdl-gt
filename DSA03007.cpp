#include<bits/stdc++.h>
using namespace std;
#define ll long long
main(){
    int t;cin>>t;
    while(t--){
        ll n;cin>>n;
        ll a[n+1],b[n+1];
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        sort(a,a+n); sort(b,b+n,greater<int>());
        ll s=0;
        for(int i=0;i<n;i++)s+=a[i]*b[i];
        cout<<s<<endl;
    }
}