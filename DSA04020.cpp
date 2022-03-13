#include<bits/stdc++.h>
using namespace std;
int np(int a[],int l,int r,int k){
    while(l<=r){
        int m=(l+r)/2;
        if(a[m]==k) return m;
        else if(a[m]>k) r=m-1;
        else l=m+1;
    }
    return -1;
}
main(){
    int t; cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        int kq=np(a,0,n-1,k);
        if(kq!=-1) cout<<kq+1;
        else cout<<"NO";
        cout<<endl; 
    }
}