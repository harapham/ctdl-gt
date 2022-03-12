#include<bits/stdc++.h>
using namespace std;
void nhap(int a[],int n){
    for(int i=0;i<n;i++) cin>>a[i];
}
void in(int a[],int n){
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<endl;
}
void bubble(int a[],int n){
    int ok;
    for(int i=0;i<n;i++){
        ok=0;
        for(int j=0;j<n-1;j++){
            if(a[j+1]<a[j]){
                ok=1;
                swap(a[j],a[j+1]);
            }
        }
        if(!ok) break;
        cout<<"Buoc "<<i+1<<": ";
        in(a,n);
    }
}
int main(){
    int a[105],n;
    cin>>n;
    nhap(a,n);
    bubble(a,n);
    return 0;
}