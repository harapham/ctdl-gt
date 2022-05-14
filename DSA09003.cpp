#include<bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        int v,e,n,m;cin>>v>>e;
        vector<vector<int>> a(v+1);
        while(e--){
            cin>>n>>m;
            a[n].push_back(m);
        }
        for(int i=1;i<=v;i++){
            cout<<i<<": ";
            for(auto x:a[i]) cout<<x<<" ";
            cout<<endl;
        }
    }
}