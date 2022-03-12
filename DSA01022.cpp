#include<bits/stdc++.h>
using namespace std;
int n,a[20],x[20],ok,k;
int check(int a[],int b[]){
    for(int i=1;i<=n;i++) if(a[i]!=b[i]) return 0;
    return 1;
}
void sinh(){
    int i=n-1;
    while(i>0&&a[i]>a[i+1]) i--;
    if(i>0){
        int j=n;
        while(a[i]>a[j]) j--;
        swap(a[i],a[j]);
        reverse(a+i+1,a+n+1);
        k++;
        if(check(a,x)) cout<<k<<endl;
    }
    else {ok=0;}
}
main(){
    int t;cin>>t;
    while(t--){
        cin>>n;
        k=1;
        for(int i=1;i<=n;i++){
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