#include<bits/stdc++.h>
using namespace std;
long long n,a[100005];
long long m=0,c[100005];
void tinh(){
    for(int i=1;i<=n;i++){
        for(int j=2;j<=n-i+1;j++){
            c[i]=j*min(c[i]/(j-1),a[i+j-1]);
            m=max(m,c[i]);
        }
    }
}
main(){
    cin>>n;
    for(int i=1;i<=n;i++) {cin>>a[i];c[i]=a[i];}
    tinh();
    cout<<m<<endl;
}