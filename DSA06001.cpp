#include<bits/stdc++.h>
using namespace std;
void nhap(int a[],int n){
    for(int i=0;i<n;i++) cin>>a[i];
}
void in(int a[],int n){
    int l=0,r=n-1;
    while(l<=r){
        if(l==r) {cout<<a[l];break;}
        else{
            cout<<a[r]<<" "<<a[l]<<" ";
            l++;r--;
        }
    }
    cout<<endl;
}
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n];
        nhap(a,n);
        sort(a,a+n);
        in(a,n);
    }
}