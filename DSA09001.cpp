#include<bits/stdc++.h>
using namespace std;
main(){
    int t;cin>>t;
    while(t--){
        int v,e,x,y;cin>>v>>e;
        vector<vector<int>> list(v+1);
        while(e--){
            cin>>x>>y;
            list[x].push_back(y);
            list[y].push_back(x);
        }
        for(int i=1;i<=v;i++){
            cout<<i<<": ";
            for(auto x:list[i])
                cout<<x<<" ";
            cout<<endl;   
        }
        
    }
}