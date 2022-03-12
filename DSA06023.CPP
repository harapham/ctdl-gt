#include<bits/stdc++.h>
using namespace std;
void nhap(int a[],int n){
    for(int i=0;i<n;i++) cin>>a[i];
}
void in(int a[],int n){
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<endl;
}
void tructiep(int a[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[j]<a[i]) swap(a[i],a[j]);
        }
        cout<<"Buoc "<<i+1<<": ";
        in(a,n);
    }
}
int main(){
    int a[105],n;
    cin>>n;
    nhap(a,n);
    tructiep(a,n);
}