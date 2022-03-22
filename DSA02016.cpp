#include<bits/stdc++.h>
using namespace std;
int n,d,b[20],a[30],ng[30],x[30];
void quaylui(int i){
    for(int j=1;j<=n;j++){
        if(a[j]&&ng[i-j+n]&&x[i+j-1]){
            b[i]=j;
            a[j]=0;ng[i-j+n]=0;x[i+j-1]=0;
            if(i==n) d++;
            else quaylui(i+1);
            a[j]=1;ng[i-j+n]=1; x[i+j-1]=1;
        }
    }
}
main(){
    int t;cin>>t;
    while(t--){
        cin>>n;
        d=0;
        for(int i=0;i<=30;i++){
            a[i]=1;ng[i]=1;x[i]=1;
        }
        quaylui(1);
        cout<<d<<endl;
    }
}