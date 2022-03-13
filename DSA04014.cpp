#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll ghep(ll a[],ll l,ll m,ll r){
    ll n1=m-l+1,n2=r-m;
    ll L[n1],R[n2];
    for(int i=0;i<n1;i++) L[i]=a[i+l];
    for(int i=0;i<n2;i++) R[i]=a[i+m+1];
    int i=0,j=0,k=l;
    ll kq=0;
    while(i<n1&&j<n2){
        if(L[i]<=R[j]) a[k++]=L[i++];
        else{
            a[k++]=R[j++];
            kq+=n1-i;
        }
    }
    while(i<n1) a[k++]=L[i++];
    while(j<n2) a[k++]=R[j++];
    return kq;
}
ll socap(ll a[],ll l,ll r){
    ll k=0;
    if(l<r){
        ll m=(l+r)/2;
        k+=socap(a,l,m);
        k+=socap(a,m+1,r);
        k+=ghep(a,l,m,r);
    }
    return k;
}
main(){
    int t;cin>>t;
    while(t--){
        ll n;cin>>n;
        ll a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        cout<<socap(a,0,n-1)<<endl;
    }
}