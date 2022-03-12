#include<bits/stdc++.h>
using namespace std;
int n,a[20],x[20],ok,s;
void sinh(){
    int i=s;
    while(i>0&&a[i]==x[n-s+i]) i--;
    if(i>0){
        int j=i;
        while(x[j]<)
        for(int j=i+1;j<=s;j++) a[j]=a[i]-i+j;
    }
    else {ok=0;}
}
main(){
    cin>>n>>s;
    int k,m[1005]={0},l=1;
    for(int i=1;i<=n;i++){
        cin>>k;
        if(m[k]==0){
            x[l]=k;
            l++;m[k]++;
        }
    }
    sort(x+1,x+l);
    n=l-1;
    ok=1;
    for(int i=1;i<=s;i++) a[i]=x[i];
    while(ok){
        for(int i=1;i<=s;i++) cout<<a[i]<<" ";
        cout<<endl;
        sinh();
    }
}