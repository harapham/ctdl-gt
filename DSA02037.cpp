#include<bits/stdc++.h>
using namespace std;
int a[20],n,b[20];
int nt(int n){
    if(n<2) return 0;
    for(int i=2;i<=sqrt(n);i++) if(n%i==0) return 0;
    return 1;
}
void quaylui(int i){
    for(int j=0;j<=1;j++){
        a[i]=j;
        if(i==n){
            int sum=0;
            for(int k=1;k<=n;k++){
                if(a[k]==1){
                    sum+=b[k];
                }
            }
            if(nt(sum)){
                for(int k=1;k<=n;k++) if(a[k]==1) cout<<b[k]<<" ";
                cout<<endl;
            }
        }
        else quaylui(i+1);
    }
}
main(){
    int t;cin>>t;
    while(t--){
        cin>>n;
        for(int i=1;i<=n;i++) cin>>b[i];
        sort(b+1,b+1+n,greater<int>());
        quaylui(1);
    }
}