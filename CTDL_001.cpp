#include<bits/stdc++.h>
using namespace std;
int a[100]={0},n,ok;
void in(int a[],int n){
    for(int i=1;i<=n;i++) cout<<a[i]<<" "; 
    cout<<endl;
}
void sinh(){
    int i=n;
    while(i>0&&a[i]!=0){a[i]=0;i--;}
    if(i>0) a[i]=1;
    else ok=0;
}
int check(){
    int b[100];
    for(int i=1;i<=n;i++) b[i]=a[i];
    reverse(b+1,b+n+1);
    for(int i=1;i<=n;i++) if(a[i]!=b[i]) return 0;
    return 1;
}
int main(){
    cin>>n;
    ok=1;
    while(ok){
        if(check()) in(a,n);
        sinh();
    }
}