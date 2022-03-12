#include<bits/stdc++.h>
using namespace std;
int b[105][105],h;
void nhap(int a[],int n){
    for(int i=0;i<n;i++) cin>>a[i];
}
void in(int n){
    for(int i=h;i>=0;i--){
        cout<<"Buoc "<<i+1<<": ";
        for(int j=0;j<n;j++) cout<<b[i][j]<<" ";
        cout<<endl;
    }
}
void bubble(int a[],int n){
    int ok;
    for(int i=0;i<n;i++){
        ok=0;
        for(int j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                ok=1;
                swap(a[j],a[j+1]);
            }
        }
        if(!ok) break;
        for(int k=0;k<n;k++){
            b[i][k]=a[k];
            h=i;
        }
    }
}
int main(){
    int t; cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n];
        nhap(a,n);
        bubble(a,n);
        in(n);
    }
}