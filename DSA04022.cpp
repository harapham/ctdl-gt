#include<bits/stdc++.h>
using namespace std;
char kitu(int n,long long k){
    long long x=pow(2,n-1);
    if(k==x) return n+64;
    if(k<x) return kitu(n-1,k);
    return kitu(n-1,k-x);
}
main(){
    int t;cin>>t;
    while(t--){
        int n;
        long long k;
        cin>>n>>k;
        cout<<kitu(n,k)<<endl;
    }
}