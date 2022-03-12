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
void selection(int a[],int n){
    int min;
    for(int i=0;i<n-1;i++){
        min=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min]) min=j; 
        }
        int t=a[i];a[i]=a[min];a[min]=t;
        for(int k=0;k<n;k++){
            b[i][k]=a[k];
            h=i;
        } 
    }
}
int main(){
    int a[105],n;
    cin>>n;
    nhap(a,n);
    selection(a,n);
    in(n);
    return 0;
}