#include<bits/stdc++.h>
using namespace std;
void nhap(int a[],int n){
    for(int i=0;i<n;i++) cin>>a[i];
}
void xuat(int a[],int n){
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    cout<<endl;
}
void solve(int a[],int n,int b[],int m){
    int un[n+m],in[n];
    int i=0,j=0,h=0,g=0;
    while(i<n&&j<m){
        if(a[i]<b[j]){
            un[h]=a[i];
            h++;i++;
        }
        else if(a[i]>b[j]){
            un[h]=b[j];
            h++;j++;
        }
        else{
            un[h]=a[i];in[g]=a[i];
            h++;g++;i++;j++;
        }
    }
    while(i<n){
        un[h]=a[i];
        h++;i++;
    }
    while(j<m){
        un[h]=b[j];
        j++;h++;
    }
    xuat(un,h);
    xuat(in,g);
    
    //c2 slow
    /* set<int> un,in;
    for(int i=0;i<n;i++) un.insert(a[i]);
    for(int i=0;i<m;i++){
        if(un.find(b[i])==un.end()) un.insert(b[i]);
        else in.insert(b[i]);
    }
    for(auto x:un) cout<<x<<" ";
    cout<<endl;
    for(auto x:in) cout<<x<<" ";
    cout<<endl; */
}
int main(){
    int t;cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int a[n],b[m];
        nhap(a,n);nhap(b,m);
        solve(a,n,b,m);
    }
}