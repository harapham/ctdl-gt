#include<bits/stdc++.h>
using namespace std;
#define ll long long
long long m=1e9+7;
main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;ll a;
        priority_queue<ll, vector<ll>,greater<ll>> q;
        for(int i=0;i<n;i++){
            cin>>a;
            q.push(a);
        }
        ll kq=0;
        while(q.size()>=2){
            ll x=q.top();q.pop();
            ll y=q.top();q.pop();
            ll sum=(x+y)%m;
            q.push(sum);
            kq=(kq+sum)%m;
        }
        cout<<kq<<endl;
    }
}