#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll m=1e9+7;
ll luythua(ll a,ll b){
    if(b==0) return 1;
    ll x=luythua(a,b/2)%m;
    if(b%2==0) return (x*x)%m;
    else return (((x*x)%m)*a)%m;
}
main(){
    ll a,b;
    while(true){
        cin>>a>>b;
        if(a==0&&b==0) return 0;
        cout<<luythua(a,b)<<endl;
    }
}