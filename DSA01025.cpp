#include<bits/stdc++.h>
using namespace std;
char a[20];
int n,k,ok;
void sinh(){
    int i=k;
    while(i>0&&a[i]==n-k+i+64) i--;
    if(i>0){
        a[i]++;
        for(int j=i+1;j<=k;j++) a[j]=a[i]-i+j;
    }
    else ok=0;
}
int main(){
    int t;cin>>t;
    while(t--){
        cin>>n>>k;
        ok=1;
        for(int i=1;i<=k;i++) a[i]=i+64;
        while(ok){
            for(int i=1;i<=k;i++) cout<<a[i];
            cout<<endl;
            sinh();
        }
    }
}