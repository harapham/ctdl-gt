#include<bits/stdc++.h>
using namespace std;
int b[105][105],h;
void nhap(int a[],int n){
    for(int i=0;i<n;i++) cin>>a[i];
}
void in(int n){
    for(int i=h;i>=0;i--){
        cout<<"Buoc "<<i+1<<": ";
        for(int j=0;j<n;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
}
void tructiep(int a[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[j]<a[i]) swap(a[i],a[j]);
        }
        for(int k=0;k<n;k++) {
            b[i][k]=a[k];
            h=i;
        }
    }
}
int main(){
    int a[105],n,t;
    cin>>t;
    while(t--){
        cin>>n;
        nhap(a,n);
        tructiep(a,n);
        in(n);
    }
}