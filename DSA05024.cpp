#include<bits/stdc++.h>
using namespace std;
int n,k,a[1005],f[1005];
long long m=1e9+7;
long long tinh(){
    memset(f,0,sizeof(f));
    f[0]=1;
    for(int i=1;i<=k;i++){
        for(int j=0;j<n;j++){
            if(a[j]<=i){
                f[i]=(f[i]+f[i-a[j]])%m;
            }
        }
    }
    return f[k];
}
main(){
    int t;cin>>t;
    while (t--){
        cin>>n>>k;
        for(int i=0;i<n;i++) cin>>a[i];
        cout<<tinh()<<endl;
    }
    
}