#include<bits/stdc++.h>
using namespace std;
int n,k,a[25],ok,b[25];
void sinh(){
    int i=k;
    while(i>0&&b[i]==n-k+i) i--;
    if(i>0){
        b[i]++;
        for(int j=i+1;j<=k;j++) b[j]=b[i]-i+j;
    }
    else ok=0;
}
main(){
    cin>>n>>k;
    int t;
    map<int,int> mp;
    for(int i=0;i<n;i++){
        cin>>t;
        mp[t]++;
    }
    int i=1;
    for(auto x:mp) a[i++]=x.first;
    n=i-1;
    ok=1;
    for(int i=1;i<=n;i++) b[i]=i;
    while(ok){
        for(int i=1;i<=k;i++) cout<<a[b[i]]<<" ";
        cout<<endl;
        sinh();
    }
}