#include<bits/stdc++.h>
using namespace std;
char quaylui(string s,long long n){
    long long x=s.length();
    if(n<x) return s[n];
    while(x*2<=n) x*=2;
    if(x==n) return quaylui(s,n-1);
    return quaylui(s,n-x-1);
}
main(){
    int t;string s;long long n;
    cin>>t;
    while(t--){
        cin>>s>>n;
        cout<<quaylui(s,n-1)<<endl;
    }
}