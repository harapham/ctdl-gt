#include<bits/stdc++.h>
using namespace std;
void nhap(int a[],int n){
    for(int i=0;i<n;i++) cin>>a[i];
}
void in(int a[],int n){
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<endl;
}
void selection(int a[],int n){
    int min;
    for(int i=0;i<n-1;i++){
        min=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min]) min=j; 
        }
        int t=a[i];a[i]=a[min];a[min]=t;
        cout<<"Buoc "<<i+1<<": ";
        in(a,n);
    }
}
int main(){
    int a[105],n;
    cin>>n;
    nhap(a,n);
    selection(a,n);
    return 0;
}