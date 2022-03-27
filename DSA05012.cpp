#include<bits/stdc++.h>
using namespace std;
long long c[1005][1005],m=1e9+7;
void tinh(){
    for(int i=0;i<1001;i++){
        for(int j=0;j<=i;j++){
            if(i==0||j==i) c[i][j]=1;
            else c[i][j]=(c[i-1][j]+c[i-1][j-1])%m;
        }
    }
}
main(){
    int t;cin>>t;
    tinh();
    while(t--){
        int n,k;
        cin>>n>>k;
        cout<<c[n][k]<<endl;
    }
}