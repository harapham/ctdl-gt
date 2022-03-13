#include<bits/stdc++.h>
using namespace std;
int so0(int a[],int l,int r){
    int m=(l+r)/2;
    while(m>=l&&m<=r){
        if(a[m]==0&&a[m+1]==1) return m-l+1;
        else if(a[m]==0) m++;
        else m--;
    }
}
main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        if(a[0]==1) cout<<0<<endl;
        else
        cout<<so0(a,0,n-1)<<endl;
    }
}