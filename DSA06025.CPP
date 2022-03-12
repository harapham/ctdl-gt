#include<bits/stdc++.h>
using namespace std;
void nhap(int a[],int n){
    for(int i=0;i<n;i++) cin>>a[i];
}
void in(int a[],int n){
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<endl;
}
void insertion(int a[],int n){
    for(int i=1;i<n;i++){
        int t=a[i];
        int j=i-1;
        while(j>=0&&a[j]>t){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=t;
        cout<<"Buoc "<<i<<": ";
        in(a,i+1);
    }
}
int main(){
    int a[105],n;
    cin>>n;
    nhap(a,n);
    cout<<"Buoc 0: "<<a[0]<<endl;
    insertion(a,n);
}