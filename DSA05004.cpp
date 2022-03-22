#include<bits/stdc++.h>
using namespace std;
int n,a[1005],f[1005];
int qhd(){
    int m=1;
    for(int i=1;i<=n;i++){
        f[i]=1;
        for(int j=1;j<i;j++){
            if(a[j]<a[i]){
                f[i]=max(f[i],f[j]+1);
            }
        }
        m=max(m,f[i]);
    }
    return m;
}
main(){
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    cout<<qhd()<<endl;
}