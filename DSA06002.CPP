#include<bits/stdc++.h>
using namespace std;
int x;
void nhap(int a[],int n){
    for(int i=0;i<n;i++) cin>>a[i];
}
void in(int a[],int n){
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<endl;
}
bool cmp (int a,int b){
    return abs(a-x)<abs(b-x);
}
void sx(int a[],int n,int x){
    stable_sort(a,a+n,cmp);
    in(a,n);
    
}
int main(){
    int n,t;
    cin>>t;
    while(t--){
        cin>>n>>x;
        int a[n];
        nhap(a,n);
        sx(a,n,x);
    }
}
