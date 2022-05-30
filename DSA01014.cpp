#include<bits/stdc++.h>
using namespace std;
int a[15],n,k,s,ok;
void sinh(){
    int i=k;
    while(i>0&&a[i]==n-k+i) i--;
    if(i>0){
        a[i]++;
        for(int j=i+1;j<=k;j++) a[j]=a[i]-i+j;
    }
    else ok=0;
}
main(){
    while(cin>>n>>k>>s){
        if(n==0&&k==0&&s==0) break;
        if(n<k) {cout<<0<<endl;continue;}
        for(int i=1;i<=k;i++) a[i]=i;
        ok=1;
        int d=0;
        while(ok){
            int t=0;
            for(int i=1;i<=k;i++) t+=a[i];
            if(t==s) d++;
            sinh();
        }
        cout<<d<<endl;
    }
}