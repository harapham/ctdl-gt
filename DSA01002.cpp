#include<bits/stdc++.h>
using namespace std;
int n,a[1005],k;
void sinh(){
    int i=k;
    while(i>0&&a[i]==n-k+i) i--;
    if(i>0){
        a[i]++;
        for(int j=i+1;j<=k;j++) a[j]=a[i]+j-i;
    }
    else{
        for(int j=1;j<=k;j++) a[j]=j;
    }
}
int main(){
    int t;cin>>t;
    while(t--){
        cin>>n>>k;
        for(int i=1;i<=k;i++) cin>>a[i];
        sinh();
        for(int i=1;i<=k;i++) cout<<a[i]<<" ";
        cout<<endl;
    }
}