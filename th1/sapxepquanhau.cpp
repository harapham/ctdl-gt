#include<bits/stdc++.h>
using namespace std;
int a[10][10],xuoi[20],nguoc[20],d[20],s[20],ma;
void sx(int i){
    for(int j=1;j<9;j++){
        if(xuoi[i+j-1]&&nguoc[i-j+8]&&d[j]){
            xuoi[i+j-1]=0;nguoc[i-j+8]=0;d[j]=0;
            s[i]=j;
            if(i==8){
                int m=0;
                for(int k=1;k<9;k++) m+=a[k][s[k]];
                ma=max(ma,m);
            }
            else sx(i+1);
            xuoi[i+j-1]=1;nguoc[i-j+8]=1;d[j]=1;
        }
    }
}
main(){
    int t,test=1;cin>>t;
    while(t--){
        for(int i=1;i<9;i++){
            for(int j=1;j<9;j++) cin>>a[i][j];
        }
        memset(xuoi,1,sizeof(xuoi));
        memset(nguoc,1,sizeof(nguoc));
        memset(d,1,sizeof(d));
        ma=0;
        sx(1);
        cout<<"Test "<<test++<<": "<<ma<<endl;
    }
}