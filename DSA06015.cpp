#include<bits/stdc++.h>
using namespace std;
void nhap(int a[],int n){
    for(int i=0;i<n;i++) cin>>a[i];
}
void in(int a[],int n){
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<endl;
}
void merge(int a[],int l,int m,int r){
    int l1=m-l+1,r1=r-m;
    int l2[l1],r2[r1];
    for(int i=0;i<l1;i++) l2[i]=a[l+i];
    for(int i=0;i<r1;i++) r2[i]=a[m+1+i];
    int i=0,j=0,k=l;
    while(i<l1&&j<r1){
        if(l2[i]<r2[j]){
            a[k]=l2[i];
            i++;
        }
        else{
            a[k]=r2[j];
            j++;
        }
        k++;
    }
    while(i<l1){
        a[k]=l2[i];
        i++;k++;
    }
    while(j<r1){
        a[k]=r2[j];
        j++;k++;
    }
}
void mergesort(int a[],int l,int r){
    if(l<r){
        int m=l+(r-l)/2;
        mergesort(a,l,m);
        mergesort(a,m+1,r);
        merge(a,l,m,r);
    }
}
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n];
        nhap(a,n);
        mergesort(a,0,n-1);
        in(a,n);
    }
}