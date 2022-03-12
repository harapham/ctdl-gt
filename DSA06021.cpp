#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int l=0,r=n-1,f;
        while(l<=r){
            if(a[l]==x){
                f=l; break;
            }
            if(a[r]==x){
                f=r;break;
            }
            if(a[l]<x) l++;
            if(a[r]>x) r--;
        }
        cout<<f+1<<endl;
    }
}