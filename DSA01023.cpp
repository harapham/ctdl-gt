#include<bits/stdc++.h>
using namespace std;
int n,a[20],x[20],ok,k,s;
int check(int a[],int b[]){
    for(int i=1;i<=s;i++) if(a[i]!=b[i]) return 0;
    return 1;
}
void sinh(){
    int i=s;
    while(i>0&&a[i]==n-s+i) i--;
    if(i>0){
        a[i]++;
        for(int j=i+1;j<=s;j++) a[j]=a[i]-i+j;
        k++;
        if(check(a,x)) cout<<k<<endl;
    }
    else {ok=0;}
}
main(){
    int t;cin>>t;
    while(t--){
        cin>>n>>s;
        k=1;
        for(int i=1;i<=s;i++){
            cin>>x[i];
            a[i]=i;
        }
        if(check(a,x)) cout<<k<<endl;
        ok=1;
        while(ok){
            sinh();
        }
    }
}