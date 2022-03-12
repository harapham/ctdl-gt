#include<bits/stdc++.h>
using namespace std;
long long m=123456789;
long long ppow(long long n,long long k){
    if(k==1) return n;
    long long x=ppow(n,k/2);
    if(k%2==0) return (x*x)%m;
    else return (((x*x)%m)*n)%m;
}
int main(){
    int t;cin>>t;
    while(t--){
        long long n;
        cin>>n;
        cout<<ppow(2,n-1)<<endl;
    }
}