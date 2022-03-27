#include<bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        long m,n,k; cin>>m>>n>>k;
        int a[m],b[n];
        for(int i=0;i<m;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        int i=0,j=0,l=0,c[m+n+1];
        while(i<m&&j<n){
            if(a[i]<=b[j]){
                c[l]=a[i]; l++;i++;
            }
            else{
                c[l]=b[j]; l++;j++;
            }
        }
        while(i<m){
            c[l++]=a[i];i++;
        }
        while(j<n){
            c[l++]=b[j];j++;
        }
        cout<<c[k-1]<<endl;
    }
}