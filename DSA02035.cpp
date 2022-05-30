#include<bits/stdc++.h>
using namespace std;
int a[10],check[10],n,k,tmp=1e9;
int kq[10];
string c[10];
void in(){
    for(int i=1;i<=n;i++){
        string s="";
        for(int j=1;j<=k;j++){
            s+=c[i][a[j]-1];
        }
        kq[i]=stoi(s);
    }
    sort(kq+1,kq+n+1);
    int d=kq[n]-kq[1];
    tmp=min(tmp,d);
}
void ql(int i){
    for(int j=1;j<=k;j++){
        if(check[j]){
            a[i]=j;
            check[j]=0;
            if(i==k){
                in();
            }
            else ql(i+1);
            check[j]=1;
        }
    }
}
main(){
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>c[i];
    }
    memset(check,1,sizeof(check));
    ql(1);
    cout<<tmp;
}