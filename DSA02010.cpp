#include<bits/stdc++.h>
using namespace std;
int n,x,a[50],c[50],ok;
void in(int n){
    ok=1;
    cout<<"[";
    for(int i=1;i<n;i++) cout<<c[i]<<" ";
    cout<<c[n]<<"]";
}
void quaylui(int i, int t){// vi tri,tong
    for(int j=1;j<=n;j++){
        if(a[j]>=c[i-1]&&t+a[j]<=x){
            c[i]=a[j];
            t+=a[j];
            if(t==x) in(i);
            else if(t>x) return;
            else quaylui(i+1,t);
            t-=a[j];
        }
    }
}
main(){
    int t;cin>>t;
    while(t--){
        cin>>n>>x;
        for(int i=1;i<=n;i++) cin>>a[i];
        ok=0;
        quaylui(1,0);
        if(ok==0) cout<<"-1";
        cout<<endl;
    }
}