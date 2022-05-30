#include<bits/stdc++.h>
using namespace std;
int ok,n,k,a[105];
void sinh(){
    int i=n;
    while(i>0&&a[i]){a[i]=0;i--;}
    if(i>0) a[i]=1;
    else ok=0;
}
main(){
    cin>>n>>k;
    int b[n+1],d=0;
    for(int i=1;i<=n;i++) cin>>b[i];
    memset(a,0,sizeof(a));
    ok=1;
    while(ok){
        int s=0,tmp=INT_MIN,okk=0;
        for(int i=1;i<=n;i++){
            if(a[i]){
                s++;
                if(b[i]>tmp) tmp=b[i];
                else okk=1;
            } 
        }
        if(s==k&&okk==0) d++;
        sinh();
    }
    cout<<d;
}