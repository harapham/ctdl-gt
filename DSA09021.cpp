#include<bits/stdc++.h>
using namespace std;
main(){
    int n,m; cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>m;
            if(m) cout<<j<<" ";
        }
        cout<<endl;
    }
}