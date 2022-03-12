#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        long long n,m,k; cin>>n>>m;
        long long a[n+m];
        for(long long i=0;i<n+m;i++){
            cin>>a[i];
        }
        sort(a,a+n+m);
        for(auto x:a) cout<<x<<" ";
        cout<<endl;
    }
}