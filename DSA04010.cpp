#include<bits/stdc++.h>
using namespace std;
int sum(int a[],int l,int m,int r){
    int sl=0,sr=0,slmax=INT_MIN,srmax=INT_MIN;
    for(int i=m;i>=l;i--){
        sl+=a[i];
        if(sl>slmax) slmax=sl;
    }
    for(int i=m+1;i<=r;i++){
        sr+=a[i];
        if(sr>srmax) srmax=sr;
    }
    return slmax+srmax;
}
int Max(int a,int b,int c){
    int m=max(a,b);
    return max(m,c);
}
int maxx(int a[],int l,int r){
    if(l==r) return a[l];
    int m=(l+r)/2;
    return Max(maxx(a,l,m),maxx(a,m+1,r),sum(a,l,m,r));
}
main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        cout<<maxx(a,0,n-1)<<endl;
    }
}