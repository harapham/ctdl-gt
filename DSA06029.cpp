#include<bits/stdc++.h>
using namespace std;
int b[105][105];
void nhap(int a[],int n){
    for(int i=0;i<n;i++) cin>>a[i];
}
void in(int n){
    int k=n;
    for(int i=n-1;i>=0;i--){
        cout<<"Buoc "<<i<<": ";
        for(int j=0;j<k;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
        k--;
    }
}
void insertion(int a[],int n){
    b[0][0]=a[0];
    for(int i=1;i<n;i++){
        int j=i-1,t=a[i];
        while(j>=0&&a[j]>t){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=t;
        for(int k=0;k<=i;k++) b[i][k]=a[k];
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    nhap(a,n);
    insertion(a,n);
    in(n);
}