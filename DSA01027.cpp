#include<bits/stdc++.h>
using namespace std;
int n,a[15],b[15]={0},c[15];
void in(){
    for(int i=1;i<=n;i++) cout<<a[i]<<" ";
    cout<<endl;
}
void quaylui(int i){
    for(int j=1;j<=n;j++){
        if(b[j]==0){
            a[i]=c[j];
            b[j]=1;
            if(i==n) in();
            else quaylui(i+1);
            b[j]=0;
        }
    }
}
main(){
    cin>>n;
    for(int i=1;i<=n;i++) cin>>c[i];
    sort(c+1,c+n+1);
    quaylui(1);
}