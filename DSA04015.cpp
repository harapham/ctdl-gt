#include<bits/stdc++.h>
using namespace std;
#define ll long long

main(){
    int t;cin>>t;
    while(t--){
        ll n,x;
        cin>>n>>x;
        /* ll a[n];
        ll k=-2;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]<=x) k=i;
        }
        cout<<k+1<<endl; */
        vector<ll> a;
        ll k;
        for(int i=0;i<n;i++){
            cin>>k;
            a.push_back(k);
        }
        if(a[0]>x) cout<<"-1"<<endl;
        else{
            vector<ll>::iterator i=upper_bound(a.begin(),a.end(),x);
            cout<<i-a.begin()<<endl;  
        }
        
    }
}