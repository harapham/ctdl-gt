#include<bits/stdc++.h>
using namespace std;
int n,a[20],b[20]={0};
int kt(){
    for(int i=1;i<n;i++){
        int t=abs(a[i]-a[i+1]);
        if(t==1) return 0;
    }
    return 1;
}
void in(){
    for(int i=1;i<=n;i++) cout<<a[i];
    cout<<endl;
}
void quaylui(int i){
    for(int j=1;j<=n;j++){
        if(b[j]==0){
            a[i]=j;
            b[j]=1;
            if(i==n) {if(kt()) in();}
            else quaylui(i+1);
            b[j]=0;
        }
    }
}
main(){
    int t;cin>>t;
    while(t--){
        cin>>n;
        quaylui(1);
    }
}