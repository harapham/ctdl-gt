#include<bits/stdc++.h>
using namespace std;
int n,x,y,z,f[105];
int tinh(){
    f[0]=0;f[1]=x;
    for(int i=2;i<=n;i++){
        if(i%2==0) f[i]=min(f[i-1]+x,f[i/2]+z);
        else f[i]=min(f[i-1]+x,f[i/2+1]+y+z);
    }
    return f[n];
}
main(){
    int t;cin>>t;
    while(t--){
        cin>>n>>x>>y>>z;
        cout<<tinh()<<endl;
    }
}