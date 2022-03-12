#include<bits/stdc++.h>
using namespace std;
long long m=1e9+7;
long long ppow(long long n,long long k){
    if(k==0) return 1;
    long long x=ppow(n,k/2);
    if(k%2==0) return (x*x)%m;
    else return (((x*x)%m)*n)%m;
}
long long dao(long long n){
    long long k=0;
    while(n>0){
        k=k*10+n%10;
        n/=10;
    }
    return k;
}
int main(){
    int t;cin>>t;
    while(t--){
        long long n;
        cin>>n;
        cout<<ppow(n,dao(n))<<endl;
    }
}