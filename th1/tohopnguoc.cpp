#include<bits/stdc++.h>
using namespace std;
int n,k,a[25];
void tohop(int i){
    for(int j=n-k+i;j>=a[i-1]+1;j--){
        a[i]=j;
        if(i==k){
            for(int l=1;l<=k;l++) cout<<a[l]<<" ";
            cout<<endl;
        }
        else tohop(i+1);
    }
}
main(){
    int t;cin>>t;
    while(t--){
        cin>>n>>k;
        tohop(1);
    }
}