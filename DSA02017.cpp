#include<bits/stdc++.h>
using namespace std;
int a[10],c[10][10],check[10],nguoc[20],xuoi[20],sum;
void ql(int i){
    for(int j=1;j<=8;j++){
        if(check[j]&&nguoc[i-j+8]&&xuoi[i+j-1]){
            a[i]=j;
            check[j]=0;nguoc[i-j+8]=0;xuoi[i+j-1]=0;
            if(i==8){
                int cnt=0;
                for(int l=1;l<=8;l++){
                    cnt+=c[l][a[l]];
                }
                sum=max(sum,cnt);
            }
            else ql(i+1);
            check[j]=1;nguoc[i-j+8]=1;xuoi[i+j-1]=1;
        }
    }
}
main(){
    int t;cin>>t;
    while(t--){
        for(int i=1;i<9;i++){
            for(int j=1;j<9;j++) cin>>c[i][j];
        }
        memset(check,1,sizeof(check));
        memset(nguoc,1,sizeof(nguoc));
        memset(xuoi,1,sizeof(xuoi));
        sum=0;
        ql(1);
        cout<<sum<<endl;
    }
}