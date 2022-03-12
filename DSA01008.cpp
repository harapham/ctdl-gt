#include<bits/stdc++.h>
using namespace std;
int n,k,a[20],ok;
int check(){
    int c=0;
    for(int i=0;i<n;i++){
        if(a[i]==1) c++;
        if(c>k) return 0;
    }
    if(c<k) return 0;
    return 1;
}
void sinh(){
    int i=n-1;
    while(i>=0&&a[i]==1){a[i]=0;i--;}
    if(i>=0) a[i]=1;
    else ok=0;
}
int main(){
    int t;cin>>t;
    while(t--){
        cin>>n>>k;
        a[n]={0};
        ok=1;
        while(ok){
            if(check()) {for(int i=0;i<n;i++) cout<<a[i];cout<<endl;}
            sinh();
        }
    }
}