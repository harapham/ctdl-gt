#include<bits/stdc++.h>
using namespace std;
int a[20],n,k,b[20];
void ql(int i){
    for(int j=a[i-1]+1;j<=n-k+i;j++){
        a[i]=j;
        if(i==k){
            for(int l=1;l<=k;l++){
                cout<<b[a[l]]<<" ";
            }
            cout<<endl;
        }
        else ql(i+1);
    }
}
main(){
    int t;cin>>t;
    while(t--){
        cin>>n>>k;
        for(int i=1;i<=n;i++) cin>>b[i];
        sort(b+1,b+n+1);
        ql(1);
    }
}