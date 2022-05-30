#include<bits/stdc++.h>
using namespace std;
int ok,a[105],gt[105],vt[105],n,v;
void sinh(){
    int i=n;
    while(i>0&&a[i]){a[i]=0; i--;}
    if(i>0) a[i]=1;
    else ok=0;
}
main(){
    cin>>n>>v;
    for(int i=1;i<=n;i++) cin>>gt[i];
    for(int i=1;i<=n;i++) cin>>vt[i];
    int kq[n+1],p=0;
    ok=1;
    memset(a,0,sizeof(a));
    while(ok){
        int s=0,t=0;
        for(int i=1;i<=n;i++){
            if(a[i]){ 
                s+=gt[i];
                t+=vt[i];
            }
        }
        if(t<=v&&s>p){
            p=s;
            for(int i=1;i<=n;i++) kq[i]=a[i];
        }
        sinh();
    }
    cout<<p<<endl;
    for(int i=1;i<=n;i++) cout<<kq[i]<<" ";
    cout<<endl;
}